#include <bits/stdc++.h>
 
using namespace std;
 
bool Check(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
 
void run_case(){
	int n, e;
	cin >> n >> e;
	int x;
	vector<vector<int>> a(e);
	for (int i = 1; i <= n; i++) {
		cin >> x;
		a[i % e].emplace_back(x);
	}
	long long sum = 0;
//	for (int i = 0; i < e; i++) {
//		for (int j = 0; j < a[i].size(); j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return;
	for (int i = 0; i < e; i++) {
		int count11 = 0;
		int count12 = 0;
		int count2 = 0;
		for (int j = 0; j < a[i].size(); j++) {
			if (a[i][j] == 1) {
				if (count2 == 0) {
					count11++;
				}
				else {
					count12++;
				}
			}
			else if (Check(a[i][j])) {
				count2++;
				if (count2 == 2) {
					count2 = 1;
					if (count11 == 0 || count12 == 0) {
						sum += count11 + count12;
					}
					else {
						sum += 1LL * (count11 + 1) * (count12 + 1) - 1; 
					}
					
					count11 = count12; 
					count12 = 0;
				}
			}
			else {
				if (count2 == 1) {
					if (count11 == 0 || count12 == 0) {
						sum += count11 + count12;
					}
					else {
						sum += 1LL * (count11 + 1) * (count12 + 1) - 1; 
					}
				}
				count2 = 0;
				count11 = 0;
				count12 = 0;
			}
		}
		if(count2 == 1){
			if (count11 == 0 || count12 == 0) {
				sum += count11 + count12;
			}
			else {
				sum += 1LL * (count11 + 1) * (count12 + 1) - 1; 
			}
		}
		
	}
	cout << sum << '\n';
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
