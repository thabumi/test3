#include <bits/stdc++.h>
 
using namespace std;

bool vowel(char c) {
	string s = "ueoai";
	if (s.find(c) != string::npos) {
		return true;
	}
	return false;
}
bool cons(char c) {
	return !vowel(c);
}

int Check(string s, string t, char a) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '?') {
			s[i] = a;
		}
		if (t[i] == '?') {
			t[i] = a;
		}
	}
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[i]) {
			continue;
		}
		if (vowel(s[i]) == vowel(t[i])) {
			res += 2;
		}
		else {
			res++;
		}
	}
	return res;
}

void run_case() {
	int n;
	string s, t;
	cin >> n >> s >> t;  
	string S = "";
	string T = "";
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == t[i]) {
			continue;
		}
		if (s[i] != '?' && t[i] != '?') {
			if (vowel(s[i]) == vowel(t[i])) {
				res += 2;
			}
			else {
				res += 1;
			}
		}
		else {
			S += s[i];
			T += t[i];
		}
	}
//	cout << S << '\n' << T << '\n';
	int Min = 1e9;
	for (char i = 'a'; i <= 'z'; i++) {
		Min = min(Min, Check(S, T, i));
	}
	res += Min;
	cout << res << '\n';
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
