#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	int first0 = n;
	int last0 = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> v;
	v.push_back(-1);
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			v.push_back(i);
		}
	}
	v.push_back(n);
	int res = -1;
	int leftRes = n;
	int rightRes = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		
		int Res = 0;
		int left = v[i];
		int right = v[i + 1];
//		return;
//		cout << left << " " << right << '\n';
		int firstneg = right;
		int lastneg = left;
		int cntneg = 0;
		for (int j = left + 1; j < right; j++) {
			if (a[j] < 0) {
				cntneg++;
			}
			if (a[j] * a[j] == 4) {
				Res++;
			}
		}
//		cout << cntneg << '\n';
//		return;
		for (int j = left + 1; j < right; j++) {
			if (a[j] < 0) {
				firstneg = j;
				break;
			}
		}
		for (int j = right - 1; j > left; j--) {
			if (a[j] < 0) {
				lastneg = j;
				break;
			}
		}
//		return;
		if (cntneg % 2 == 0) {
			if (Res > res) {
				res = Res;
				leftRes = left;
				rightRes = right;
			}
			
		}
		else {
			int cnt1 = 0;
			for (int j = left + 1; j < lastneg; j++) {
//				cout << a[j] << " ";
				if (a[j] * a[j] == 4) {
					cnt1++;
				}
			}
//			cout << '\n';
			if (cnt1 > res) {
				res = cnt1;
				leftRes = left;
				rightRes = lastneg;
			}
			int cnt2 = 0;
			for (int j = firstneg + 1; j < right; j++) {
				if (a[j] * a[j] == 4) {
					cnt2++;
				}
			}
			if (cnt2 > res) {
				res = cnt2;
				leftRes = firstneg;
				rightRes = right;
			}
		}
	}
//	cout << leftRes << " " << rightRes << '\n';
//	cout << res << '\n';
	cout << leftRes + 1 << " " << n - rightRes << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
