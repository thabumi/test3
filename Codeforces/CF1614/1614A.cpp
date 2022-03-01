#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n, l, r, k;
	string s;
	int x;
	cin >> n >> l >> r >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (l <= x && x <= r) {
			a.emplace_back(x);
		}
	}
	sort(a.begin(), a.end());
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (k >= a[i]) {
			k-= a[i];
			count++;
		}
		else {
			break;
		}
	}
	cout << count << '\n';
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
