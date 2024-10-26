#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int num;
    cin >> num;
    int re = num;
    cout << num << "=";
    if(num == 1) {
        cout << "1";
        return 0;
    }
    for(int i = 2; i <= re; i++) {
        if(num % i == 0) {
            cout << i;
            num /= i;
            i--;
            if(num != 1){
                cout << "*";
            }
            else
                return 0;
        }
    }
}