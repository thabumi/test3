#include <bits/stdc++.h>
 
using namespace std;
long long n, h;
vector<long long> a;
bool Check(long long k) {
	long long sum = k;
	for (int i = 1; i < n; i++) {
		sum += min(a[i] - a[i - 1], k);
	}
	if (sum >= h) {
		return true;
	}
	return false;
}
 
void run_case(){
	cin >> n >> h;
	a.resize(0);
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long l = 1;
	long long r = h;
	long long mid;
	while (true) {
		mid = (l + r + 1) / 2;
		if (Check(mid) && !Check(mid - 1)) {
			break;
		}
		else if (!Check(mid)) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	cout << mid << '\n';
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
