#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <cjson/cJSON.h>

// A small buffer to store the response
char buffer[10000]; // big enough for simple JSON

// Callback for curl to write response
size_t write_callback(void *data, size_t size, size_t nmemb, void *userp) {
    size_t total = size * nmemb;
    strncat((char *)userp, (char *)data, total); // append data to buffer
    return total;
}

int main() {
    CURL *curl = curl_easy_init(); // init curl || initialize
    if(curl) {
        buffer[0] = 0; // make sure buffer is empty

        // 1️⃣ URL of Open-Meteo API (La Trinidad)
        curl_easy_setopt(curl, CURLOPT_URL,
            "https://api.open-meteo.com/v1/forecast?latitude=16.4774&longitude=120.5855&current_weather=true");

        // 2️⃣ Set callback function to write data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        // 3️⃣ Pass buffer to store response
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, buffer);

        // Perform the request
        CURLcode res = curl_easy_perform(curl);

        // Check if request was successful
        if(res != CURLE_OK) {
            printf("Curl failed: %s\n", curl_easy_strerror(res));
        } else {
            // Parse JSON
            cJSON *json = cJSON_Parse(buffer);
            if(json) {
                cJSON *current = cJSON_GetObjectItem(json, "current_weather");
                if(current) {
                    double temp = cJSON_GetObjectItem(current, "temperature")->valuedouble;
                    double wind = cJSON_GetObjectItem(current, "windspeed")->valuedouble;
                    printf("Current Temperature: %.1f °C\n", temp);
                    printf("Current Wind Speed: %.1f km/h\n", wind);
                }
                cJSON_Delete(json);
            } else {
                printf("Failed to parse JSON!\n");
            }
        }

        curl_easy_cleanup(curl); // cleanup curl
    }

    return 0;
}
