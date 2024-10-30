#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

int main() {
	int n, row;
	int a[1010];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				row = a[i];
				a[i] = a[i + 1];
				a[i + 1] = row;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	
	return 0;
}