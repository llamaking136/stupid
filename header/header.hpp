#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#define VERSION "0.1.0"

using namespace std;

namespace header {

    bool searchFile(const char *file) {
        ifstream infile(file);
        if (!infile.good()) {
            return false;
        } else {
            return true;
        }
    }

    void compileFile(const char *path) {
        cout << path << endl;
    }

    void runFile(string path) {
        // ree
    }

}