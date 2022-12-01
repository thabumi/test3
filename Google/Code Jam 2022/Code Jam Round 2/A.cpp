#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int t = n / 2;
	if (k % 2 != 0) {
		cout << "IMPOSSIBLE\n";
		return; 
	}
	if (k < 2 * t) {
		cout << "IMPOSSIBLE\n";
		return;
	}
	for (int i = max(k - 2 * t, 1); i <= k; i++) {
		int l = 1, r = t;
		while (l < r) {
			int mid = (l + r) / 2;
			if (4 * mid * (2 * t - mid + 1) < i) {
				l = mid + 1;
			}
			else {
				r = mid;
			}
		}
		int remain = i - (4 * (r - 1) * (2 * t - (r - 1) + 1));
//		cout << i << " " << remain << '\n';
		int circler = 8 * (t + 1 - r);
		int xi, yi;
		if (remain <= 2 * (t + 1 - r)) {
			xi = r;
			yi = r + remain - 1;
			if (i - 1 + abs(xi - t - 1) + abs(yi - t - 1) == k) {
//				cout << "one\n";
				if (remain <= t + 1 - r + 1) {
					cout << t + 1 - r << '\n';
					int beg = i + t + 1 - yi;
					for (int j = r; j <= t; j++) {
						cout << beg << " " << beg + 8 * (t - j + 1) - 1 << '\n';
						beg = beg + 8 * (t - j + 1) - 1;
					}
					return;
				}
				else {
					int beg = i;
					vector<int> jump;
					jump.push_back(beg);
					while (xi < n + 1 - yi) {
						xi++;
						beg = beg + 8 * (t - r + 1) - 1; 
						jump.push_back(beg); 
						r++;
						
					}
					while (xi < t + 1) {
						xi++;
						beg++;
						jump.push_back(beg);
					}
					while (yi > t + 1) {
						yi--;
						beg = beg + 8 * (t - r + 1) - 3;
						r++;
						jump.push_back(beg);
					}
					int cnt = 0;
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cnt++;
						}
					}
					cout << cnt << '\n';
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cout << jump[j] << " " << jump[j + 1] << '\n';
						}
					}
					return;
				}
//				cout << "hu";
//				return;
				
			}
			
		}
		else if (remain <= 4 * (t + 1 - r)) {
//			cout << "abc\n"; 
			remain -= (2 * (t + 1 - r));
//			cout << i << " " << remain << " " << t + 1 - r + 1 << '\n';
			yi = n + 1 - r;
			xi = r + remain - 1;
			if (i - 1 + abs(xi - t - 1) + abs(yi - t - 1) == k) {
//				cout << "two\n"; 
				if (remain <= t + 1 - r + 1) {
					cout << t + 1 - r << '\n';
					int beg = i + t + 1 - xi;
					for (int j = r; j <= t; j++) {
						cout << beg << " " << beg + 8 * (t - j + 1) - 3 << '\n';
						beg = beg + 8 * (t - j + 1) - 3;
					}
					return;
				}
				else {
	//				cout << "hu";
					int beg = i;
					vector<int> jump;
					jump.push_back(beg);
					while (yi > xi) {
						yi--;
						beg = beg + 8 * (t - r + 1) - 3; 
						jump.push_back(beg); 
						r++;
						
					}
					while (yi > t + 1) {
						yi--;
						beg++;
						jump.push_back(beg);
					}
					while (xi > t + 1) {
						xi--;
						beg = beg + 8 * (t - r + 1) - 5;
						r++;
						jump.push_back(beg);
					}
					int cnt = 0;
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cnt++;
						}
					}
					cout << cnt << '\n';
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cout << jump[j] << " " << jump[j + 1] << '\n';
						}
					}
					return;
				}
			}
			
		} 
		else if (remain <= 6 * (t + 1 - r)) {
			remain -= (4 * (t + 1 - r));
			xi = n + 1 - r;
			yi = n + 1 - r - remain + 1;
			if (i - 1 + abs(xi - t - 1) + abs(yi - t - 1) == k) {
//				cout << "three\n";
//				cout << i << '\n';
				if (remain <= t + 1 - r + 1) {
//					cout << ""
					cout << t + 1 - r << '\n';
					int beg = i + yi - t - 1;
					for (int j = r; j <= t; j++) {
						cout << beg << " " << beg + 8 * (t - j + 1) - 5 << '\n';
						beg = beg + 8 * (t - j + 1) - 5;
					}
					return;
				}
				else {
//					cout << "hu\n";
					int beg = i;
					vector<int> jump;
					jump.push_back(beg);
					while (xi > n + 1 - yi) {
						xi--;
						beg = beg + 8 * (t - r + 1) - 5; 
						jump.push_back(beg); 
						r++;
						
					}
					while (xi > t + 1) {
						xi--;
						beg++;
						jump.push_back(beg);
					}
					while (yi < t + 1) {
						yi++;
						beg = beg + 8 * (t - r + 1) - 7;
						r++;
						jump.push_back(beg);
					}
					int cnt = 0;
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cnt++;
						}
					}
					cout << cnt << '\n';
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cout << jump[j] << " " << jump[j + 1] << '\n';
						}
					}
					return;
				}
			}
		}
		else {
			remain -= (6 * (t + 1 - r));
			yi = r;
			xi = n + 1 - r - remain + 1;
			if (i - 1 + abs(xi - t - 1) + abs(yi - t - 1) == k) {
//				cout << "four\n";
//				cout << i << '\n';
				if (remain <= t + 1 - r + 1) {
					cout << t + 1 - r - 1 << '\n';
					int beg = i + xi - t - 1;
					for (int j = r; j <= t - 1; j++) {
						cout << beg << " " << beg + 8 * (t - j + 1) - 7 << '\n';
						beg = beg + 8 * (t - j + 1) - 7;
					}
					return;
				}
				else {
//					cout << "hu";
					int beg = i;
					vector<int> jump;
					jump.push_back(beg);
					while (yi + 1 < xi) {
						yi++;
						beg = beg + 8 * (t - r + 1) - 7; 
						jump.push_back(beg); 
						r++;
						
					}
					yi++;
					beg++;
					jump.push_back(beg);
					r++;
					while (yi < t + 1) {
						yi++;
						beg++;
						jump.push_back(beg);
					}
					while (xi < t + 1) {
						xi++;
						beg = beg + 8 * (t - r + 1) - 1;
						r++;
						jump.push_back(beg);
					}
					int cnt = 0;
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cnt++;
						}
					}
					cout << cnt << '\n';
					for (int j = 0; j < jump.size() - 1; j++) {
						if (jump[j] + 1 < jump[j + 1]) {
							cout << jump[j] << " " << jump[j + 1] << '\n';
						}
					}
					return;
				}
			}
		}
//		cout << i << " " << xi << " " << yi << '\n';
//		if (i + abs(xi - t - 1) + abs(yi - t - 1) == k) {
//			
//		}
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
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
