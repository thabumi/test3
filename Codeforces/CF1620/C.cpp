#include <bits/stdc++.h>
 
using namespace std;
 
string res(string s, long long k, long long x) {
	if(s == "") {
		return s;
	}
	long long t = s.size() - 1;
	long long count = 0;
	while (t >= 0 && s[t] == '*') {
		count++;
		t--;
	}
	if (count == 0) {
		s.erase(s.size() - 1, 1);
		return res(s, k, x) + 'a';
	}
//	if (count == 0) {
//		while(s[s.size() - 1] == 'a') {
//			s.erase(s.size() - 1, 1);
//		}
//		return res(s, k, x);
//	}
	count = count * k + 1;
	long long c = x % count;
	x /= count;
//	string l;
	t++;
//	l = s.substr(t, s.size() - t);
	s.erase(t, s.size() - t);
	
	string T = "";
	for (int i = 0; i < c; i++) {
		T += 'b';
	}
	return res(s, k, x) + T;
}
 
void run_case() {
	long long n, k, x;
	cin >> n >> k >> x;
	string s;
	cin >> s;
	x--;
	string r = res(s, k, x);
	cout << r << '\n';
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
