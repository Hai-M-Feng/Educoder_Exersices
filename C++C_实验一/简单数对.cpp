#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	for(int i = 2; i <= 10; i++) {
        for(int j = i - 1; j >= 1; j--) {
            printf("(%d,%d) ", i, j);
        }
    }
    return 0;
}
