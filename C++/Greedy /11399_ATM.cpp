#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

    int num = 0, time[1000], sum = 0;

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> time[i];
    }

    sort(time, time+num);

    for(int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            sum += time[j];
        }
    }

    cout << sum << endl;
    return 0;
}