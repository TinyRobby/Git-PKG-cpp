#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Headers/json.hpp"
#include "Headers/curl/curl.h"

using namespace std;
using json = nlohmann::json;

int main(int argc, char *argv[])
{
    int choice;
    string pkg;
    ofstream out;
    CURL *handle = curl_easy_init();
    if(!handle) { cout << "cURL didn't load" << endl; return 1; }
    cout << "Because of my lack of programming skills or my IDE/OS being bad, I am not able to use arguments yet.\nSo just choose from the following options.\n1)Install a program\n2)Remove a program\n3)Get developer options.\nMore choices coming soon!" << endl;
    cout << "Make your selection now. Numbers only Plz!" << endl;
    cin >> choice;
    if(choice == 1) {
        cout << "Program name: ";
        cin >> pkg;
        CURLcode res;
        string ting
        curl_easy_setopt(handle, CURLOPT_URL, "https://google.com/");
        res = curl_easy_perform(handle);
        curl_easy_cleanup(handle);
        return 0;
    }
    if(choice == 2) {
        cout << "This feature is still under developement. Please wait." << endl;
        return 0;
    }
    if(choice == 3) {
        cout << "Welcome to the developer options.\nSome tools are required going forward. The tools can be found if you type \'docs\' after restarting the program  Find them here:\nhttps://tinyrobby.github.io/gitpkg\nAll you need to do is click the link and pres Ctrl+S and follow the instructions on how to build a json package file."  << endl;
    }
    else {
        cout << "Nope." << endl;
    }
    //json
    return 0;

}

