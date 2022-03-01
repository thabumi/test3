#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	string s;
	cin >> n >> s;
	if (s.find("aa") != string::npos) {
		cout << 2 << '\n';
		return;
	}
	if (s.find("aba") != string::npos || s.find("aca") != string::npos) {
		cout << 3 << '\n';
		return;
	}
	if (s.find("abca") != string::npos || s.find("acba") != string::npos) {
		cout << 4 << '\n';
		return;
	}
	if (s.find("abbacca") != string::npos || s.find("accabba") != string::npos) {
		cout << 7 << '\n';
		return;
	}
	cout << -1 << '\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

