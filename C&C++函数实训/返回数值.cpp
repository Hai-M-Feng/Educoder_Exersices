#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

int main() {
    int num, address;
    cin >> num >> address;
    for (int i = 0; i < address - 1; i++)
        num /= 10;
    cout << num % 10;
    return 0;
}