#include <iostream>

using namespace std;

int main(void) {
    int num = 0, sum = 0, num2 = 0;
    char string[500000];

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> string[i];
    }

    // 런타임 에러 (OutOfBounds)를 위해 반복문을 하나 덜 돔.
    for(int i = 0; i < num - 1; i++) {
        
        if(string[i] == string[i+1]) {num2 += 1;}

        else {
            sum += (num2 + 1) / 2;
            num2 = 0;
        }
    }

    // 런타임 에러 (OutOfBounds)를 해결하기 위해 반복문을 하나 덜 돌기 때문에,
    // 마지막 계산을 위한 로직을 다시 추가
    sum += (num2 + 1) / 2;

    cout << sum << endl;
    return 0;
}