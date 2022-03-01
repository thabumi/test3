#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool OK = true;
	int del1;
	int del2;
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) {
			del1 = a[i];
			del2 = a[n - 1 - i];
			OK = false;
			break;
		}
	}
	if (OK) {
		cout << "YES\n";
		return;
	}
	vector<int> New1;
	vector<int> New2;
	for (int i = 0; i < n; i++) {
		if (a[i] != del1) {
			New1.emplace_back(a[i]);
		}
		if (a[i] != del2) {
			New2.emplace_back(a[i]);
		}
	}
//	for (int i = 0; i < New1.size(); i++) {
//		cout << New1[i] << " ";
//	}
//	cout << '\n';
//	for (int i = 0; i < New2.size(); i++) {
//		cout << New2[i] << " ";
//	}
//	cout << '\n';
	bool OK1 = true;
	bool OK2 = true;
	for (int i = 0; i < New1.size() / 2; i++) {
		if (New1[i] != New1[New1.size() - 1 - i]) {
			OK1 = false;
			break;
		}
	}
	for (int i = 0; i < New2.size() / 2; i++) {
		if (New2[i] != New2[New2.size() - 1 - i]) {
			OK2 = false;
			break;
		}
	}
	if (OK1 || OK2) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
