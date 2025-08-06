// For connecting to servers / APIs / sockets:

// Sockets → For TCP/UDP connections

// HTTP Libraries (libcurl) → For making web requests

// Example: Simple HTTP GET with libcurl

#include <iostream>
#include <curl/curl.h>
using namespace std;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* output) {
    output->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main() {
    CURL* curl = curl_easy_init();
    if (curl) {
        string response;
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.github.com");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        cout << response << endl;
    }
    return 0;
}
