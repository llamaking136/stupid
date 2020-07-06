#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include "header/header.hpp"

using namespace std;

string stdlib[1] = {"PRINT"};
string stderrs[2] = {
    "func not found err", "data not found err"
};
string version = "0.1.0";
string usage = "stupid <path/filename>;stupid compile <path/filename>";
string data;
int compile = 0;


int interpreter() {
    cout << "STUPID interpreter version " << version << endl;
    while (true);
}

int main(int argc, char* argv[]) {
    if (not argv[1]) {
        cout << "usage: " << usage << endl;
        return 0;
    }
    if (strcmp(argv[1], "compile") == 0) {
        compile++;
    }
    if (compile == 1 && not argv[2]) {
        cout << "usage: " << usage << endl;
        return 0;
    }

    // compileFile("helloworld");
    // cout << "ree" << endl;
    return 0;
}

/* 
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s = "Somewhere down the road";
    istringstream iss(s);

    do
    {
        string subs;
        iss >> subs;
        cout << "Substring: " << subs << endl;
    } while (iss);
}
*/