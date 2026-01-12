#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <cjson/cJSON.h>
size_t write_callback(void *p, size_t size, size_t nmemb, void *data) {
    strcat(data, p);
    return size * nmemb;
}

int main(void) {
    CURL *curl;
    CURLcode res;
    char response[1000] = "";
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://official-joke-api.appspot.com/random_joke");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, response);
        res = curl_easy_perform(curl);
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        else{
            cJSON *json = cJSON_Parse(response);
            if(json) {
                cJSON *setup = cJSON_GetObjectItemCaseSensitive(json, "setup");
                cJSON *punchline = cJSON_GetObjectItemCaseSensitive(json, "punchline");
                
                if(cJSON_IsString(setup) && cJSON_IsString(punchline)) {
                    printf("joke: %s\n", setup->valuestring);
                    printf("answer: %s\n", punchline->valuestring);
                }
                cJSON_Delete(json);
            }
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}