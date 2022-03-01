#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long n, m;
	cin >> n >> m;
	long long sumA = 0;
	long long sumB = 0;
	long long a[n], b[n];
	for (long long i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sumA += a[i];
		sumB += b[i];
	}
	long long sumAfter = sumA + sumB - m * n;
	long long sumAMIN = sumA;
	long long sumAMAX = sumA;
	vector<long long> canInc;
	vector<long long> canDec;
	vector<long long> res1;
	vector<long long> res2;
	for (int i = 0; i < n; i++) {
		long long s = max(min(a[i], m), max(m - b[i], 0LL));
		long long t = min(min(a[i], m), max(m - b[i], 0LL));
		sumAMIN -= s;
		sumAMAX -= t;
		res1.push_back(s);
		res2.push_back(t);
		canInc.push_back(s - t);
		canDec.push_back(s - t);
	}
	if (sumAMAX * 2 <= sumAfter) {
		cout << sumAfter - 2 * sumAMAX << '\n';
		for (int i = 0; i < n; i++) {
			cout << res2[i] << " " << m - res2[i] << '\n';
		}
	}
	else if (sumAMIN * 2 >= sumAfter) {
		cout << sumAMIN * 2 - sumAfter << '\n';
		for (int i = 0; i < n; i++) {
			cout << res1[i] << " " << m - res1[i] << '\n';
		}
	}
	else {
		long long Res = sumAfter / 2;
		cout << (sumAfter & 1LL) << '\n';
		long long Dif = Res - sumAMIN;
		for (int i = 0; i < n; i++) {
			if (Dif > 0) {
				long long t = min(Dif, canInc[i]);
				res1[i] -= t;
				Dif -= t;
			}
			cout << res1[i] << " " <<  m - res1[i] << '\n';
		}
	}
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

