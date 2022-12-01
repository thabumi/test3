#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	double x[3];
	double y[3];
	double r, p;
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	double A = y[1] - y[0];
	double B = x[0] - x[1];
	double C = y[0] * x[1] - x[0] * y[1];
	double Distance = abs(x[2] * A + y[2] * B + C);
	Distance /= sqrt(A * A + B * B);
	cin >> r >> p;
//	double t = 0;
//	for (int i = 0; i < 2; i++ ){
//		t += (x[i] - y[i]) * (x[i] - y[i]);
//	}
//	t = sqrt(t);
//	cout << t << '\n';
	if (Distance >= r) {
		cout << "NO";
		return;
	}
	double k = acos(Distance / r);
//	cout << k / 3.14159265 << '\n';
	double S = (- sin(2 * k) / 2 + k) / 3.14159265;
//	cout << S << '\n';
//	cout << abs(S - (p / 100));
	if (abs(S - (p / 100)) <= 0.05 + 1e-9) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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


