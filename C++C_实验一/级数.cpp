#include <iostream>
#include <cstdio>

using namespace std;

const double EXACT = 0.000001;

bool jingdu(double n) {
    if(n < EXACT)
        return false;
    else 
        return true;
}

double absl(double n) {
    return n > 0 ? n : -n;
}

double jiecheng(int n) {
    double sum = 1;
    while(n) {
        sum *= double(n);
        n--;
    }
    return sum;
}

double cifang(double dishu, int cimi) {
    double sum = 1;
    for(int i = 1; i <= cimi; i++)
        sum *= dishu;
    return sum;
}

int main() {
	double x, xiang = 0.0;
    double sum = 0.0;
    int i = 1;
    cin >> x;
    while(true) {
        xiang = cifang(x, i) / jiecheng(i);
        if(!jingdu(xiang))
            break;
        sum += (i % 4 == 1 ? 1 : -1) * xiang;
        i += 2;
    }
    printf("%.6lf", sum);
    return 0;
}
