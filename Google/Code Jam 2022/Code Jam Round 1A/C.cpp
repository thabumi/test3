#include <bits/stdc++.h>
 
using namespace std;

int value(vector<int>& v) {
	int res = 0;
	for (int t : v) {
		res += max(t, 0);
	}
	return res;
}
bool all0(vector<int>& v) {
	bool ok = true;
	for (int t : v) {
		ok &= (t == 0);
	}
	return ok;
}

void run_case() {
	int ex, wei;
	cin >> ex >> wei;
	vector<vector<int>> v(ex, vector<int>(wei));
	for (int i = 0; i < ex; i++) {
		for (int j = 0; j < wei; j++) {
			cin >> v[i][j];
		}
	}
//	for (int i = 0; i < ex; i++) {
//		for (int j = 0; j < wei; j++) {
//			cout << v[i][j] << " ";
//		}
//	}
//	cout << '\n';
//	return;
	vector<vector<int>> t;
	t.push_back(v[0]);
//	return;
	for (int i = 1; i < ex; i++) {
		vector<int> tmp(wei);
		for (int j = 0; j < wei; j++) {
			tmp[j] = v[i][j] - v[i - 1][j];
		}
		t.push_back(tmp);
	}
//	for (int i = 0; i < ex; i++) {
//		for (int j = 0; j < wei; j++) {
//			cout << t[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return;
	vector<vector<int>> block;
	int res = value(v[0]);
	int jump = 0;
	block.push_back(v[0]);
	
	for (int i = 1; i < ex; i++) {
		int sz = block.size();
		vector<int> newBlock(wei);
		for (int j = 0; j < wei; j++) {
			if (t[i][j] < 0) {
				res -= t[i][j];
				for (int k = sz - 1; k >= 0; k--) {
					while (block[k][j] > 0 && t[i][j] < 0) {
						block[k][j]--;
						jump += block.size() - 1 - k;
						t[i][j]++;
					}
					if (all0(block[k])) {
						block.erase(block.begin() + k);
					}
					if (t[i][j] == 0) {
						break;
					}
					
				}
				newBlock[j] = 0;
			}
			else {
				newBlock[j] = t[i][j];
				res += t[i][j];
			}
		}
		if (!all0(newBlock)) {
			block.push_back(newBlock);
		}
	}
//	cout << jump << '\n';
	res += jump * 2;
//	cout << res << '\n';
	res += value(v[ex - 1]);
	cout << res << '\n';
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
