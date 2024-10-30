#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>

using namespace std;

int a[1010][1010];
int row, column;

int MaxRow(int position, int locate) {
	int max = a[position][locate];
	for (int i = 0; i < row; i++) {
		if (a[position][i] > max) {
			max = a[position][i];
			locate = i;
		}
	}
	return locate;
}

int MinColumn(int position, int locate) {
	int min = a[locate][position];
	for (int i = 0; i < column; i++) {
		if (a[i][position] < min) {
			min = a[i][position];
			locate = i;
		}
	}
	return locate;
}

int main() {
	bool flag = true;

	cin >> row >> column;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			cin >> a[i][j];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			if (MaxRow(i, j) == j && MinColumn(j, i) == i) {
				cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
				flag = false;
			}

	if (flag)
		cout << "没有找到鞍点";

	return 0;
}