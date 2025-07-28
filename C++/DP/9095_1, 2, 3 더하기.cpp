#include <iostream>
using namespace std;

int main(void) {
    int dp[12], num = 0, num_list[12], cnt[12];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> num_list[i];

        for(int j = 4; j <= num_list[i]; j++) {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];          
        }
        cnt[i] = dp[num_list[i]];
    }
    
    for(int i = 0; i < num; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}