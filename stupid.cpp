#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

string version = "0.1.0";
string usage = "stupid <path/filename>;stupid compile <path/filename>";
string data;
int compile = 0;

int main(int argc, char* argv[]) {
    if (not argv[1]) {
        cout << "usage: " << usage << endl;
        return 0;
    }
    if (argv[1] == "compile") {
        compile++;
    }
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