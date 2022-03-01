#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> cnt(n + 5, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	int i = 0;
	while (1) {
		if (cnt[i] == 0) {
			break;
		}
		i++;
	}
	int next = i;
	int mn = next;
	int ptr = 0;
	int Cnt = 0;
	vector<int> res;
	map<int, int> m;
//	return;
	while (ptr < n) {
		cnt[a[ptr]]--;
		if (cnt[a[ptr]] == 0) {
			mn = min(mn, a[ptr]);	
		}
		if (!m[a[ptr]] && a[ptr] < next) {
			Cnt++;
			m[a[ptr]] = 1;
		}
		if (Cnt == next) {
			res.push_back(next);
			next = mn;
			m.clear();
			Cnt = 0;
		}
//		cout << ptr << " " << a[ptr] << " ";
		ptr++;
	}
//	cout << '\n';
	cout << res.size() << '\n';
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << ' ';
	}
	cout << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
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
