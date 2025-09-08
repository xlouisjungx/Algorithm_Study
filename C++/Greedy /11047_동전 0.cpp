#include <iostream>

using namespace std;

int main(void) {
    int N = 0, K = 0, A[10], result = 0;

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = N; i > 0; i--) {
        if(K / A[i-1] > 0) {
            result += K / A[i-1];
            K = K - (A[i-1] * (K / A[i-1]));
        }
    }

    cout << result << endl;
    return 0;
}