#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include "header/header.hpp" // do i really need this? i can just plop the functions here
// #import <stdio.h> // because why not?

using namespace std;
using namespace header;

const string stdlib[1] = {"PRINT"};
const string stderrs[3] = {
    "func not found", "data not found", "file not found"
};
const string version = "0.1.0"; // do i need to change this more often? // why cant i use public like in java?? java was based on c/c++!!!
const string usage = "stupid <path/filename>;stupid compile <path/filename>";
const string data;
int compile = 0;
char* toCompile;

class color { // just so it doesnt take up more space (no doo doo sherlock)
    public: // make private so i have a harder time please!
    string bold = "\33[1m";
    string undl = "\33[4m";
    string red = "\33[31m";
    string blue = "\33[34";
    string reset = "\33[0m";
};

int main(int argc, char* argv[]) {
    color c;
    if (!argv[1]) {
        cout << "usage: " << usage << endl;
        return 0;
    }
    if (compile == 1 && not argv[2]) {
        cout << "usage: " << usage << endl;
        return 0;
    }
    if (strcmp(argv[1], "compile") == 0) {
        if (!argv[2]) {
            cout << "usage: " << usage << endl;
            return 0;
        }
        compile++; // for later in the code
        toCompile = argv[2];
    }
    if (compile != 1) {
        toCompile = argv[1];
    }
    if (!searchFile(toCompile)) {
        cout << "[" << c.red << "ERROR" << c.reset << "]: file '" << toCompile << "' was not found!" << endl; // how can i make this shorter?
        cout << stderrs[2] << " err" << endl; // to make it clear that it cant find the file
        return 1;
    }
    if (true) { // dont mind, figuring out how to use it
        
    }
    // cout << "ree" << endl;
    return 0;
}

/* for parsing the file, might use it later. credit to somebody on stackoverflow. cant remember who it was (who would?)
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
// if you finished reading the code, good job