#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double month, rooms, sum = 0;
    cin >> month >> rooms;
    sum = 398.0 * rooms;
    if (month >= 7 && month <= 9) {
        if (rooms >= 20) {
            sum *= 0.7;
        }
        else {
            sum *= 0.85;
        }
    }
    else {
        if (rooms >= 20) {
            sum *= 0.5;
        }
        else {
            sum *= 0.7;
        }
    }

    printf("%.2lf", sum);
        
    return 0;
}