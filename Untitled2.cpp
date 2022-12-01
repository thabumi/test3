#include <bits/stdc++.h>

using namespace std;

map<int, double> m;

// 2's complement
string decToBin(double d, int dec) {
	// 14-dec ---> -dec
	string res = "";
	if (d < 0) {
		res += '0';
		d = -d;
		double t = d - (int)(d);
		int k = (int)(d);
		for (int i = 14 - dec; i >= 0; i--) {
			if ((int)(m[i]) <= k) {
				k -= (int)(m[i]);
				res += '1';
			}
			else {
				res += '0';
			}
		}
//		if (dec > 0) {
//			res += '.';
//		}
		for (int i = 1; i <= dec; i++) {
			t *= 2;
			if (t >= 1) {
				t -= 1;
				res += '1';
			}
			else {
				res += '0';
			}
		}
		for (int i = 15; i >= 0; i--) {
			res[i] = (char)('0' + '1' - res[i]);
		}
		for (int i = 15; i >= 0; i--) {
			if (res[i] == '0') {
				res[i] = '1';
				break;
			}
			else {
				res[i] = '0';
			}
		}
	}
	else {
		res += '0';
		double t = d - (int)(d);
		int k = (int)(d);
		for (int i = 14 - dec; i >= 0; i--) {
			if ((int)(m[i]) <= k) {
				k -= (int)(m[i]);
				res += '1';
			}
			else {
				res += '0';
			}
		}
//		if (dec > 0) {
//			res += '.';
//		}
		for (int i = 1; i <= dec; i++) {
			t *= 2;
			if (t >= 1) {
				t -= 1;
				res += '1';
			}
			else {
				res += '0';
			}
		}
	}
	return res;
} 

double binToDec(string s, int dec) {
	double res = 0;
	if (s[0] == '1') {
		for (int i = 15; i >= 0; i--) {
			if (s[i] == '1') {
				s[i] = '0';
				break;
			}
			else {
				s[i] = '1';
			}
		}
		for (int i = 15; i >= 0; i--) {
			s[i] = (char)('0' + '1' - s[i]);
		}
		int i = -dec;
		int cnt = 15;
		while (cnt >= 1) {
			res += m[i] * (s[cnt] == '1');
			i++;
			cnt--;
		}
		res = -res;
	}
	else {
		int i = -dec;
		int cnt = 15;
		while (cnt >= 1) {
			res += m[i] * (s[cnt] == '1');
			i++;
			cnt--;
		}
	}
	return res;
}

int main() {
	cout << fixed << setprecision(14);
	m[0] = 1;
	for (int i = 1; i <= 16; i++) {
		m[i] = m[i - 1] * 2;
	}
	for (int i = -1; i >= -16; i--) {
		m[i] = m[i + 1] / 2;
	}
	
	
	cout << decToBin(106.125, 4);
//	cout << binToDec("0110001010100110", 4);
	return 0;
}
