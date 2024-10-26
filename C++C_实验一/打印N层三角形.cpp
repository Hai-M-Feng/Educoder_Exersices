#include <iostream>
#include <cstdio>

using namespace std;

void fill(int n) {
    for(int i = 0; i < n; i++) {
        cout << "   ";
    }
}

void setfill(int n) {
    cout << n;
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    if(count == 1)
        cout << "  ";
    else if(count == 2)
        cout << " ";
}

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        fill(n - i);
        for(int j = 1; j <= 2 * i - 1; j += 2) {
            setfill(j);
        }
        for(int j = 2 * i - 3; j > 0; j -= 2) {
            setfill(j);
        }
        cout << endl;
    }

    return 0;
}