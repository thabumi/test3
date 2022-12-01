#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long lcm(long long a, long long b) {
	return abs(a * b / __gcd(a, b));
}

void run_case() {
	long long a[3], order[3];
	for (int i = 0; i< 3; i++) cin >> a[i];
	for (int i = 0; i < 3; i++) order[i] = i;
	if (a[0] > a[1]) {
		swap(a[0], a[1]);
		swap(order[0], order[1]);
	}
	if (a[0] > a[2]) {
		swap(a[0], a[2]);
		swap(order[0], order[2]);
	}
	if (a[1] > a[2]) {
		swap(a[1], a[2]);
		swap(order[1], order[2]);
	}
//	sort(a,a+3);
	set<long long> s;
//	long long gcd = __gcd(a[0],a[1]);
//	gcd = __gcd(gcd, a[2]);
//	gcd = a[0] * a[1] * a[2] / gcd;

	long long gcd = lcm(a[0], lcm(a[1], a[2]));
	
	long long numa[3];
	for (int j = 0; j < 3 ; j ++) {
		numa[j] = gcd / a[j];
		for (long long i = numa[j]; i<= gcd; i+= numa[j]) s.insert(i);
	}
//	cout << gcd << "\n" ;
	long long pre = 0;
	vector<ll> ans;
	for (set<long long>::iterator it = s.begin(); it!= s.end(); it++) {
		ans.push_back((*it) - pre);
		pre = (*it);
	}
	cout << ans.size() << "\n" ;
	a[0] = a[1] = a[2] = 0;
	if (order[0] > order[1]) {
		swap(order[0], order[1]);
		swap(numa[0], numa[1]);
	}
	if (order[0] > order[2]) {
		swap(order[0], order[2]);
		swap(numa[0], numa[2]);
	}
	if (order[1] > order[2]) {
		swap(order[1], order[2]);
		swap(numa[1], numa[2]);
	}
	int dem[3];
	dem[0] = dem[1] = dem[2] = 1;
	for (int i = 0; i < ans.size(); i++) {
		long long it = ans[i];
		cout << it << " " ;
		for (int i = 0; i < 3; i++) {
			a[i] += it;
			cout << dem[i] << " ";
			if (a[i] >= numa[i]) {
//				a[i] -= numa[i];
				a[i] = 0;
				dem[i]++;
			}
		}
		cout << "\n" ;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
