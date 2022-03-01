#include <bits/stdc++.h>

using namespace std;
int c;
int addcyc(int a, int b) {
	return (a + b) % c;
}
int minuscyc(int a, int b) {
	return ((a - b) % c + c) % c;
}

void run_case() {
	
	cin >> c;
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	cout << "YES\n";
	vector<vector<int>> ans;
	if (a[0][0] != a[0][1]) {
		int k = minuscyc(a[0][1], a[0][0]);
		ans.push_back({0, 0, 0, 0, 1, minuscyc(a[0][1], a[0][0])});
		a[0][0] = addcyc(a[0][0], k);
	}
	if (a[0][2] != a[0][1]) {
		int k = minuscyc(a[0][1], a[0][2]);
		ans.push_back({0, 0, 0, 0, 3, minuscyc(a[0][1], a[0][2])});
		a[0][2] = addcyc(a[0][2], k);
	}
	if (a[1][1] != a[1][0]) {
		int k = minuscyc(a[1][0], a[1][1]);
		ans.push_back({0, 0, 0, 1, 9, minuscyc(a[1][0], a[1][1])});
		a[1][1] = addcyc(a[1][1], k);
		a[1][2] = addcyc(a[1][2], k);
		a[2][1] = addcyc(a[2][1], k);
		a[2][2] = addcyc(a[2][2], k);
	}
	if (a[1][1] != a[1][2]) {
		int k = minuscyc(a[1][2], a[1][1]);
		ans.push_back({0, 0, 1, 0, 7, minuscyc(a[1][2], a[1][1])});
		a[1][0] = addcyc(a[1][0], k);
		a[1][1] = addcyc(a[1][1], k);
		a[2][0] = addcyc(a[2][0], k);
		a[2][1] = addcyc(a[2][1], k);
	}
	if (a[2][0] != a[2][1]) {
		int k = minuscyc(a[2][1], a[2][0]);
		ans.push_back({0, 0, 0, 0, 7, minuscyc(a[2][1], a[2][0])});
		a[2][0] = addcyc(a[2][0], k);
	}
	if (a[2][2] != a[2][1]) {
		int k = minuscyc(a[2][1], a[2][2]);
		ans.push_back({0, 0, 0, 0, 9, minuscyc(a[2][1], a[2][2])});
		a[2][2] = addcyc(a[2][2], k);
	}
	if (a[1][0] != a[0][0]) {
		int k = minuscyc(a[0][0], a[1][0]);
		ans.push_back({0, 0, 1, 1, 7, minuscyc(a[0][0], a[1][0])});
		for (int i = 1; i < 3; i++) {
			for (int j = 0; j < 3; j++ ){
				a[i][j] = addcyc(a[i][j], k);
			}
		}
	}
	if (a[0][0] != a[2][0]) {
		int k = minuscyc(a[2][0], a[0][0]);
		ans.push_back({1, 1, 0, 0, 1, minuscyc(a[2][0], a[0][0])});
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j <= 2; j++) {
				a[i][j] = addcyc(a[i][j], k);
			}
		}
		a[0][0] = a[0][1] = a[0][2] = a[1][0] = a[1][1] = a[1][2] = a[2][0];
	}
	if (a[0][0] != 0) {
		int k = minuscyc(0, a[0][0]);
		ans.push_back({1, 1, 1, 1, 1, minuscyc(0, a[0][0])});
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				a[i][j] = addcyc(a[i][j], k);
			}
		}
	}
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;
}