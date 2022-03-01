#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n;
	cin >> n;
	int a[n];
	string s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	cin >> s;
	vector<int> Red;
	vector<int> Blue;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			Red.push_back(a[i]);
		}
		else {
			Blue.push_back(a[i]);
		}
	}
	sort(Red.begin(), Red.end(), greater<int>());
	sort(Blue.begin(), Blue.end());
	for (int i = 0; i < Blue.size(); i++) {
		if(Blue[i] < i + 1) {
			cout << "NO\n";
			return;
		}
	}
	for (int i = 0; i < Red.size(); i++) {
		if (Red[i] > n - i) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

