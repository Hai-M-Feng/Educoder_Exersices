#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int n, co = 1;
	cin >> n;

	int nums[1010];

	if (n == 1) {
		//初始化
		for (int i = 0; i < 7; i++) {
			nums[i] = i;
		}
		//循环输出6次
		for (int k = 0; k < 6; k++) {
			//输出每行
			for (int i = 0; i <= 5; i++) {
				//对齐左侧
				cout << nums[(i + co) % 7] << " ";
			}
			//换行以及自增
			cout << endl;
			co++;
		}
		return 0;
	}
	else if (n == 2) {
		//输入几个数
		int howMany;
		cin >> howMany;
		//初始化
		for (int i = 0; i < howMany; i++) {
			nums[i] = i;
		}
		nums[howMany] = 0;
		//循环输出n次
		for (int k = 0; k < howMany; k++) {
			//输出每行
			for (int i = 0; i < howMany; i++) {
				//对齐起点
				cout << nums[(i + co) % howMany] << " ";
			}
			//换行自增
			cout << endl;
			co++;
		}
		return 0;
	}
	else if (n == 3) {
		//6行，同时k作为标志
		for (int k = 0; k < 6; k++) {
			//从k + 1开始输出到2
			for (int i = k + 1; i > 1; i--) {
				cout << i << " ";
			}
			//从1开始输出到6 - k
			for (int i = 1; i <= 6 - k; i++) {
				cout << i << " ";
			}
			//换行
			cout << endl;
		}
		return 0;
	}
	else if (n == 4) {
		for (int i = 0; i < 6; i++) {
			cout << char('A' + i) << " ";
		}
		cout << endl;
		//5行，同时k作为基底
		for (int k = 1; k < 5; k++) {
			co = 0;
			int row = 0;
			for (int i = 0; i < 6; i++) {
				cout << char('A' + k + co) << " ";
				row++;
				co += row;
			}
			cout << endl;
		}
		return 0;
	}

	return 0;
}
