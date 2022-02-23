#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Headers/json.hpp"

using namespace std;
using namespace nlohmann;

int main( int argc, char *argv[] )
{
    int choice;
    cout << "Because of my lack of programming skills, I am not able to use arguments yet.\nSo just choose from the following options.\n1)Install a program\n2)Remove a program\n3)Get developer options.\nMore choices coming soon!" << endl;
    cout << "Make your selection now. Numbers only Plz!" << endl;
    cin >> choice;
    if(choice == 1) {
        cout << "This feature is still under developement. Please wait." << endl;
        return 0;
    }
    if(choice == 2) {
        cout << "This feature is still under developement. Please wait." << endl;
        return 0;
    }
    if(choice == 3) {
        cout << "Welcome to the developer options.\nSome tools are required going forward. Find them here:\nhttps://tinyrobby.github.io/gitpkg\nAll you need to do is click the link and pres Ctrl+S and follow the instructions on how to build a json package file."  << endl;

    }

    return 0;
}
