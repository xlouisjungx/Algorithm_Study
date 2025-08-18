#include<iostream>

using namespace std;

int num1, num2;
int arr[9];      
bool used[9];   

void backtrack(int depth) {
    if (depth == num2) {   
        for (int i = 0; i < num2; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= num1; i++) {
        if (!used[i]) {         
            used[i] = true;        
            arr[depth] = i;        
            backtrack(depth + 1);  
            used[i] = false;       
        }
    }
}

int main(void) {

    cin >> num1 >> num2;
    backtrack(0);

    return 0;
}