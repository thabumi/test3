#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	string s;
	cin >> n >> s;
	int Count = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			Count++;
		}
	}
	vector<int> v;
	for (int i = 0; i < Count; i++) {
		if (s[i] == '1') {
			v.push_back(i + 1);
		}
	}
	for (int i = Count; i < n; i++) {
		if (s[i] == '0') {
			v.push_back(i + 1);
		}
	}
	if (v.empty()) {
		cout << 0 << '\n';
	}
	else {
		cout << 1 << "\n";
		cout << v.size() << " ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << '\n';
	}
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

