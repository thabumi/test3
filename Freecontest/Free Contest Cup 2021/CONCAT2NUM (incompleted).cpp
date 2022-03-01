#include <bits/stdc++.h>
 
using namespace std;
bool Check(string a, string b) {
	if (a.size() == b.size()) {
		return a <= b;
	}
	else {
		return a.size() < b.size();
	}
}
long long L, R;

void run_case(){
	int n;
	cin >> n >> L >> R;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), Check);
//	for (int i = 0; i < n; i++) {
//		cout << v[i] << " ";
//	}
	cout << '\n';
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int l = 0;
		int r = n - 1;
		int mid;
		int l1 = 0;
		int r1 = n - 1;
		int mid1;
		if (stoll(v[i] + v[n - 1]) < L) {
//			cout << -1 << "\n";
			continue;
		}
		if (stoll(v[i] + v[0]) > R) {
//			cout << -1 << "\n";
			continue;
		}
		bool OK1 = false;
		bool OK2 = false;
		if (stoll(v[i] + v[0]) >= L) {
			mid = 0;
			OK1 = true;
		}
		if (stoll(v[i] + v[n - 1]) <= R) {
			mid1 = n;
			OK2 = true;
		}
		if (!OK1) {
			while (l < r) {
				mid = (l + r + 1) / 2;
				string t = v[i] + v[mid];
				string T = v[i] + v[mid - 1];
				if (stoll(t) >= L && stoll(T) < L){
					break;	
				}
				else if (stoll(t) < L) {
					l = mid;
				}
				else {
					r = mid - 1;
				}
			}
		}
		
		if (!OK2) {
			while (l1 < r1) {
				mid1 = (l1 + r1 + 1) / 2;
				string t = v[i] + v[mid1];
				string T = v[i] + v[mid1 - 1];
				if (stoll(T) <= R && stoll(t) > R){
					break;	
				}
				else if (stoll(t) <= R) {
					l1 = mid1;
				}
				else {
					r1 = mid1 - 1;
				}
			}
		}
		
		
		sum += mid1 - mid;
//		cout << "mid: " << mid << " mid1: " << mid1 << "\n";
	}
//	cout << '\n';
	cout << sum << '\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}

