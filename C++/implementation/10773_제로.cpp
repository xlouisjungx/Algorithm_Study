#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    std::stack<int> num_array;
    int array = 0, num = 0, sum = 0;

    cin >> array;

    for(int i = 0; i < array; i++) {
        cin >> num;

        if(num == 0) num_array.pop();

        else num_array.push(num);
    }

    while(!num_array.empty()) {
        sum += num_array.top();
        num_array.pop();
    }

    cout << sum << endl;
    return 0;
}