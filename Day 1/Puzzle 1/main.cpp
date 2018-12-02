#include <iostream>

using namespace std;

int main() {
    
    int sum = 0;
    bool endInput = false;

    while (!endInput) {
        
        string temp;
        cin >> temp;
        
        if (temp == "") {
            endInput = true;
        }
        else if (temp.at(0) == '+') {
            temp.erase (0,1);
            sum = sum + stoi(temp);
        }
        else if (temp.at(0) == '-') {
            temp.erase (0,1);
            sum = sum - stoi(temp);
        }
        cout << sum << endl;
    }

    cout << sum << endl;


    return 0;
}