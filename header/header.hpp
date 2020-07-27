#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#define VERSION "0.1.0"

using namespace std;

namespace header {

    const string stdlib[1] = {"PRINT"};
    const string stderrs[3] = {
        "func not found", "data not found", "file not found"
    };

    bool searchFile(const char *file) {
        ifstream infile(file);
        if (!infile.good()) {
            return false;
        } else {
            return true;
        }
    }

    string getToken(const string codeline) {
        istringstream iss(codeline);
        string token;
        iss >> token;
        return token;
    }

    bool compileFile(const char *path) {
        if (searchFile(path)) {
            return true;
        } else {
            return false;
        }
    }

    void runFile(string path) {
        // ree
    }

}
