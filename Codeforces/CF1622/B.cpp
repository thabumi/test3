#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	string s;
	cin >> s;
	int count = 0;
	vector<pair<int, int>> good;
	vector<pair<int, int>> bad;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			good.push_back(make_pair(a[i], i));
			count++;
		}
		else {
			bad.push_back(make_pair(a[i], i));
		}
	}
	int res[n];
	sort(good.begin(), good.end());
	sort(bad.begin(), bad.end());
	for (int i = 0; i < bad.size(); i++) {
		res[bad[i].second] = i + 1;
	}
	int k = bad.size();
	for (int i = 0; i < good.size(); i++) {
		res[good[i].second] = k + i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << res[i] << " ";
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
