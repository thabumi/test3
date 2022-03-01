#include <bits/stdc++.h>
 
using namespace std;
 
int n;
 
int Add(int i, int a) {
	i = (i + a) % n;
	if (i < 0) {
		i += n;
	}
	if (i == 0) {
		return n;
	}
	return i;
}
 
 
void q(int a, int b, int c) {
	cout << "? " << a << " " << b << " " << c << endl;
}
 
void ans(vector<int> v) {
	cout << "! " << v.size() << " ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
void run_case() {
	cin >> n;
	int i = 1;
	vector<int> res(n + 5, -1);
	q(1, 2, 3);
	int C;
	int I;
	while (true) {
		cin >> res[i];
		if (res[i] != res[Add(i, -1)] && res[i] != -1 && res[Add(i, -1)] != -1) {
			if (res[i] == 1) {
				C = Add(i, 2);
				I = Add(i, -1);	
			}
			else {
				I = Add(i, 2);
				C = Add(i, -1);	
			}
			vector<int> Res;
			Res.push_back(I);
			for (int i = 1; i <= n; i++) {
				if (i != C && i != I) {
					q(C, I, i);
					int x;
					cin >> x;
					if (x == 0) {
						Res.push_back(i);
					}
				}
			}
			ans(Res);
			return;
		}
		i = Add(i, 1);
		q(i, Add(i, 1), Add(i, 2));
	}
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
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