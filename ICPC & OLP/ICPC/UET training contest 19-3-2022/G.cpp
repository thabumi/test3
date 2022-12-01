#include <bits/stdc++.h>
 
using namespace std;

long long INF = 1e15;

int v[(int)2e7 + 5];
int leftt[(int)1e7 + 5];
int rightt[(int)1e7 + 5];

void run_case() {
	int n;
	cin >> n;
	int lefttmost;
	int righttmost;
	int mid = -1;
	int cnt = 0;
	char c;
	cin >> c;
	v[1] = 1e7;
	lefttmost = righttmost = 1;
	cnt = 1;
	int in = 2;
	mid = 1;
	for (int i = 1; i < n; i++) {
		cin >> c;
		if (c == 'L') {
			if (cnt == 0) {
				v[in] = 1e7;
				lefttmost = righttmost = mid = in;
				cnt = 1;
				in++;
				continue;
			}
			v[in] = v[lefttmost] - 1;
			rightt[in] = lefttmost;
			leftt[lefttmost] = in;
			lefttmost = in;
			cnt++;
			if (cnt % 2 != 0) {
				mid = leftt[mid];
			}
			in++;
		}
		else if (c == 'R') {
			if (cnt == 0) {
				v[in] = 1e7;
				lefttmost = righttmost = mid = in;
				cnt = 1;
				in++;
				continue;
			}
			v[in] = v[righttmost] + 1;
			leftt[in] = righttmost;
			rightt[righttmost] = in;
			righttmost = in;
			cnt++;
			if (cnt % 2 == 0) {
				mid = rightt[mid];
			}
			in++;
		}
		else if (c == 'G'){
			int x;
			cin >> x;
			int l = leftt[x];
			int r = rightt[x];
			if (x == lefttmost) {
				lefttmost = rightt[lefttmost];
				leftt[lefttmost] = 0;
			}
			if (x == righttmost) {
				righttmost = leftt[righttmost];
				rightt[righttmost] = 0;
			}
			if (l > 0) {
				rightt[l] = r;
			}
			if (r > 0) {
				leftt[r] = l;
			}
			
			if (x == mid) {
				if (cnt % 2 == 0) {
					mid = leftt[mid];
				}
				else {
					mid = rightt[mid];
				}
			}
			else if (v[x] > v[mid]) {
				if (cnt % 2 == 0) {
					mid = leftt[mid];
				}
			}
			else {
				if (cnt % 2 != 0) {
					mid = rightt[mid];
				}
			}
			cnt--;
		}
		else {
			cout << mid << '\n';
//			cout << cnt << " " << mid << '\n';
		}
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
