#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s;
	cin >> s;
	int i = s.size() - 1;
	
	while (true) {
		if (i < 0) {
			break;
		}
		//101001110
		if (s[i] == '1') {
			if (i + 1 < s.size() && s[i + 1] == '0') {
				s[i] = '.';
				s[i + 1] = '.';
//				s.erase(i, 2);
				i--;
				continue;
			}
			else if (i - 1 >= 0 && s[i - 1] == '0') {
//				s.erase(i - 1, 2);
				s[i] = '.';
				s[i - 1] = '.';
				i -= 2;
				continue;
			}
		}
		i--;
	}
	int count = 0;
	for (int j = 0; j < s.size(); j++) {
		if (s[j] == '1') {
			count++;
		}
	}
//	cout << s << '\n';
	cout << count << '\n';
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
