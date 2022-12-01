#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <bitset>
#include <set>

using namespace std;

bool prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
/*
0 1 2 3
4 5 6 7

0 4 1 5 2 6 3 7
*/
int main() {
	int n;
	cin >> n;
	int a[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[(i >= n) + (i - (i >= n) * n) * 2];
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
