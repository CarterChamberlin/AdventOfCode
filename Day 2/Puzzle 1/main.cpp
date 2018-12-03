#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main() {
    
    vector<string> input;
    string x;
    while (cin >> x) {
        sort(x.begin(), x.end());
        input.push_back(x);
    }

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < input[i].length() - 1; j++) {
            if (input[i].at(j) != input[i].at(j+1)) {
                input[i].at(j) = ' ';
            }
        }
        if (input[i].at(input[i].length() - 1) != input[i].at(input[i].length() - 2)) {
            input[i].at(input[i].length() - 1) = ' ';
        }
        else if(input[i].at(input[i].length() - 1) == input[i].at(input[i].length() - 2)) {
            input[i].at(input[i].length() - 1) = ' ';
        }
    }

    for (int i = 0; i < input.size(); i++) {
        input[i].erase(::remove_if(input[i].begin(), input[i].end(), ::isspace), input[i].end());
    }


    for (int i = 0; i < input.size(); i++) {
        
        cout << input[i] << endl;
    }















    return 0;
}