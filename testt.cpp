#include <bits/stdc++.h>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[] = {1, 3, 5, 7, 9};
	int* ptr = a;
	cout << *ptr++ << '\n';
	cout << *ptr << '\n';
	int n = 5;
	n = (n = n + 1);
	cout << n;
	return 0;
}



