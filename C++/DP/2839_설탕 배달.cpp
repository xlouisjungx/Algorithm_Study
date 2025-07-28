#include <iostream>
using namespace std;

int main(void) {
    int sugar = 0, bag = 0;

    cin >> sugar;

    while(sugar >= 0) {
        if(sugar % 5 == 0) {
            bag += sugar / 5;
            cout << bag << endl;
            return 0;
        }
        bag++;
        sugar -= 3;
    }

    cout << "-1" << endl;
    return 0;
}