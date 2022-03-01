#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	long long x, y;
	cin >> x >> y;
	string X = "";
	string Y = "";
	for (int i = 0; i < 61; i++) {
		if (x & (1LL << i)) {
			X = '1' + X;
		}
		else {
			X = '0' + X;
		}
		if (y & (1LL << i)) {
			Y = '1' + Y;
		}
		else {
			Y = '0' + Y;
		}
	}
	int i = 0;
	while (X[i] == '0') {
		i++;
	}
	X.erase(0, i);
	i = 0;
	while (Y[i] == '0') {
		i++;
	}
	Y.erase(0, i);
	if (Y[Y.size() - 1] == '0') {
		if (Y == X) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		return;
	}
	string X1 = X;
	int j = X.size() - 1;
	while (X1[j] == '0') {
		j--;
	}
	j++;
	X1.erase(j, X1.size() - j);
	string Y1 = Y;
	string Y4 = Y;
	string Y3 = Y;
	bool b1 = false;
	bool b2 = false;
	int a1 = Y.find(X);
	if (a1 != -1) {
		Y.erase(a1, (int)(X.size()));
	}
	else {
		b1 = true;
	}
	for (int i = 0; i < Y.size(); i++) {
		if (Y[i] == '0') {
			b1 = true;
			break;
		}
	}
	int a2 = Y1.find(X1);
	if (a2 != -1) {
		Y1.erase(a2, (int)(X1.size()));
	}
	else {
		b2 = true;
	}
	for (int i = 0; i < Y1.size(); i++) {
		if (Y1[i] == '0') {
			b2 = true;
			break;
		}
	}
	reverse(X.begin(), X.end());
	reverse(X1.begin(), X1.end());
	bool b3 = false;
	bool b4 = false;
	a1 = Y3.find(X);
	if (a1 != -1) {
		Y3.erase(a1, (int)(X.size()));
	}
	else {
		b3 = true;
	}
	for (int i = 0; i < Y3.size(); i++) {
		if (Y3[i] == '0') {
			b3 = true;
			break;
		}
	}
	a2 = Y4.find(X1);
	if (a2 != -1) {
		Y4.erase(a2, (int)(X1.size()));
	}
	else {
		b4 = true;
	}
	for (int i = 0; i < Y4.size(); i++) {
		if (Y4[i] == '0') {
			b4 = true;
			break;
		}
	}
	
	if (b1 && b2 && b3 && b4) {
		cout << "NO";
	}
	else {
		cout << "YES";
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


