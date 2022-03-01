#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> cnt1(5001, 0);
	vector<int> cnt2(5001, 0);
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt1[a[i]]++;
	}
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		cnt2[b[i]]++;
	}
	int cntinv = 0;
	int cntinv2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				cntinv++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				cntinv2++;
			}
		}
	}
	bool two = false;
	for (int i = 0; i <= 5000; i++) {
		if (cnt1[i] != cnt2[i]) {
			cout << "No";
			return;
		}
		if (cnt1[i] >= 2) {
			two = true;
		}
	}
	if (two) {
		cout << "Yes";
	}
	else if ((cntinv - cntinv2) % 2 == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}

