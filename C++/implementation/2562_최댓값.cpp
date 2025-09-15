#include <iostream>

using namespace std;

int main(void) {
    int num[9], max_num = 0, max_index = 0;

    for(int index = 0; index < 9; index++) {
        cin >> num[index];
    }

    max_num = num[0];
    max_index = 1;

    for(int index = 1; index < 9; index++) {
        if(max_num < num[index]) { 
            max_num = num[index]; 
            max_index = index + 1;
        }
    }

    cout << max_num << endl;
    cout << max_index << endl;
    return 0;
}