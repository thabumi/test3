#include <bits/stdc++.h>
 
using namespace std;

int ans;
void q(int i, int j, int k) {
	cout << "? " << i << " " << j << " " << k << endl;
	cin >> ans;
}

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 3; i <= n; i++) {
		q(1, 2, i);
		a[i] = ans;
	}
	int ind = 3;
	int mx = a[3];
	int mn = a[3];
	for (int i = 4; i <= n; i++) {
		if (a[i] > mx) {
			mx = a[i];
			ind = i;
		}
		if (a[i] < mn) {
			mn = a[i];
		}
	}
	bool first2 = true;
	if (mx != mn) {
		first2 = false;
	}
	
	vector<int> b(n + 1, -1);
	bool first = true;
	int ind2;
	int mx2;
	int mn2;
	for (int i = 2; i <= n; i++) {
		if (i == ind) {
			continue;
		}
		else {
			q(1, ind, i);
			if (ans > mx) {
				first2 = false;
			}
			b[i] = ans;
			if (first) {
				ind2 = i;
				mx2 = ans;
				mn2 = ans;
				first = false;
			}
		}
	}
	if (first2) {
		cout << "! " << 1 << " " << 2 << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] > mx2) {
			mx2 = b[i];
			ind2 = i;
		}
		if (b[i] < mn2 && b[i] >= 0) {
			mn2 = b[i];
		}
	}
	if (mn2 == mx2) {
		cout << "! " << ind << " " << 1 << endl;
		return;
	}
	cout << "! " << ind << " " << ind2 << endl;
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
