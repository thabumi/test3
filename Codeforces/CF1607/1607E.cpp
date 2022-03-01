 #include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	int Y = 0;
	int X = 0;
	int YMIN = 0;
	int YMAX = 0;
	int XMIN = 0;
	int XMAX = 0;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'U') {
			Y++;
			if (YMAX < Y) {
				YMAX = Y;
			}
			if (YMAX - YMIN >= n) {
				YMAX--;
				break;
			}
		}
		if (s[i] == 'D') {
			Y--;
			if (YMIN > Y) {
				YMIN = Y;
			}
			if (YMAX - YMIN >= n) {
				YMIN++;
				break;
			}
		}
		if (s[i] == 'L') {
			X--;
			if (XMIN > X) {
				XMIN = X;
			}
			if (XMAX - XMIN >= m) {
				XMIN++;a
				break;
			}
		}
		if (s[i] == 'R') {
			X++;	
			if (XMAX < X) {
				XMAX = X;
			}
			if (XMAX - XMIN >= m) {
				XMAX--;
				break;
			}
		}	
	}
	cout << n + YMIN << " " << m - XMAX << '\n';
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

