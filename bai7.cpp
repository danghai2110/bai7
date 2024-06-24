#include<iostream>

using namespace std;
int main() {
	cout << "Chuong trinh uoc tinh so";
	int n;
	cout << "Nhập Số";
	cin >> n;
	for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				cout << " " << i;
			}
		}
	return 0;
}