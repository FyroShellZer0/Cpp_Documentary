#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <string.h>
size_t write_callback(void *p, size_t size, size_t nmemb, void *userdata) {
    strcat(userdata, p); //append response to user data
    return size * nmemb;
}
int main(void) {
    CURL *curl;
    CURLcode res;
    char response[1000] = ""; //buffer to store API response
    
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://official-joke-api.appspot.com/random_joke");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, response);
        res = curl_easy_perform(curl);

        if(res != CURLE_OK){
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        }else {
            printf("API response: \n%s\n" , response);
            curl_easy_cleanup(curl);
        }
        curl_global_cleanup();
    }
    return 0;
}