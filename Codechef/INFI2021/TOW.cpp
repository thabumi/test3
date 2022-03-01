#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	map<int, int> count1;
	map<int, int> count2;
	priority_queue<int> s1;
	priority_queue<int> s2;
	int a[n];
	int b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		count1[a[i]]++;
		s1.insert(a[i]);
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		count2[b[i]]++;
		s2.insert(b[i]);
	}
	
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
