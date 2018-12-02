#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    vector<int> input;
    int x;
    while (cin >> x) {
        input.push_back(x);
    }
    set<int> sums;
    int sum = 0;
    bool isFound = false;
    while(isFound == false) {

        for (int i = 0; i < input.size(); i++) {
            sum = sum + input.at(i);
            
            if (sums.size() > 1) {
                if (sums.count (sum) > 0) {
                    isFound = true;
                    break;
                }
            }
            sums.insert(sum);
        }
    }
    cout << "First duplicate frequency is " << sum << endl;
    return 0;
}