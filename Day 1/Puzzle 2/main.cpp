#include <iostream>

using namespace std;

int main() {
    
    int inputCount = 0;
    string *input = new string[1025];
    
    while (inputCount < 1025) {
        cin >> input[inputCount];
        inputCount++;
    }

    bool repeatFound = false;
    int length = 1025;
    int *sums = new int[length];
    int sum = 0;
    int magic = 0;
    int k = 0;
    while (!repeatFound){

        for (int i = 0; i < 1025; i++) {
            string temp = input[i];
            if (temp.at(0) == '+') {
                temp.erase (0,1);
                sum = sum + stoi(temp);
            }   
            else if (temp.at(0) == '-') {
                temp.erase (0,1);
                sum = sum - stoi(temp);
            }
            sums[k] = sum;
            if ( k != 0 ) {
                for (int p  = 0; p < k; p++) {
                    cout << sum << "    " << sums[p] << endl;
                    if (sum == sums[p]) {
                        magic = sum;
                        repeatFound = true;
                        break;
                    }
                }   
            }
            
            k++;
        }
        break;
        /*for (int i = 0; i < length; i++) {
            for (int j = (i + length - 1025 + 1); j < length; j++) {
                cout << sums[i] << "    " << sums[j] << endl;
                if (sums[i] == sums[j]) {
                    magic == sums[i];
                    repeatFound = true;
                }
            }

        }*/
        

        length = length + 1025;
        int *tempSums = new int[length];
        for (int m = 0; m < length; m++) {
            tempSums[m] = sums[m];
        }
        delete [] sums;
        sums = tempSums;
        delete [] tempSums;
        
        
    }

    cout << "Magic = " << magic << endl;

    return 0;
}