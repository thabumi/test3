#include <bits/stdc++.h>
 
using namespace std;
int n;
vector<int> a;
vector<int> b;
bool Check(int k) {
	if (k <= 1) {
		return true;
	}
	int count = 0;
	int i = 0;
	while (i < n) {
		if (count == k) {
			break;
		}
		if (b[i] >= count && a[i] >= k - 1 - count) {
			count++;
		}
		i++;
		
	}
	if (count == k) {
		return true;
	} 
	else {
		return false;
	}
}
 
void run_case(){
	cin >> n;
	a.resize(0);
	b.resize(0);
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a.emplace_back(x);
		b.emplace_back(y);
	}	
	if (Check(n)) {
		cout << n << '\n';
		return;
	}
//	for (int i = 2; i <= n; i++) {
//		cout << Check(i) << " ";
//	}
//	cout << '\n';
//	cout << "Check2:" <<  Check(2) << '\n';
	int l = 1;
	int r = n;
	int mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (!Check(mid) && Check(mid - 1)) {
			break;
		}
		else if (Check(mid)) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	cout << mid - 1 << '\n';
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
