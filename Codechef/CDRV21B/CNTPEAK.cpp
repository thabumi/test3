#include <bits/stdc++.h>
 
using namespace std;
int n;
vector<int> res;
string s;
void bt(string s) {
	if (s.size() == n) {
		res[1]++;
		for (int i = 1; i < n - 1; i++) {
			if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
				res[0]++;
			}
			if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
				res[0]++;
			}
		}
		return;
	}
	s += '0';
	bt(s);
	s.pop_back();
	s += '1';
	bt(s);
	s.pop_back();
	s += '2';
	bt(s);
	s.pop_back();
}
void run_case() {
	
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	res.resize(2);
	res[0] = 0;
	long long f[11];
	f[1] = 0;
	int t;
	t = 1;
	cin >> t;
	for (int i = 2; i <= 10; i++) {
		n = i;
		res[0] = 0;
		res[1] = 0;
		string s = "";
		bt(s);
		f[i] = res[0];
//		cout << i << " " <<  res[1] << '\n';
	}
	for (int i = 0; i < t; i++) {
		int m;
		cin >> m;
		cout << f[m] << '\n';
	}
	return 0;	
}
