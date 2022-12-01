#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	if (s == "Mar") {
		if (n >= 21) {
			cout << "Aries\n";
		}
		else {
			cout << "Pisces\n";
		}
	}
	else if (s == "Apr") {
		if (n >= 21) {
			cout << "Taurus\n";
		}
		else {
			cout << "Aries\n";
		}
	}
	else if (s == "May") {
		if (n >= 21) {
			cout << "Gemini\n";
		}
		else {
			cout << "Taurus\n";
		}
	}
	else if (s == "Jun") {
		if (n >= 22) {
			cout << "Cancer\n";
		}
		else {
			cout << "Gemini\n";
		}
	}
	else if (s == "Jul") {
		if (n >= 23) {
			cout << "Leo\n";
		}
		else {
			cout << "Cancer\n";
		}
	}
	else if (s == "Aug") {
		if (n >= 23) {
			cout << "Virgo\n";
		}
		else {
			cout << "Leo\n";
		}
	}
	else if (s == "Sep") {
		if (n >= 22) {
			cout << "Libra\n";
		}
		else {
			cout << "Virgo\n";
		}
	}
	else if (s == "Oct") {
		if (n >= 23) {
			cout << "Scorpio\n";
		}
		else {
			cout << "Libra\n";
		}
	}
	else if (s == "Nov") {
		if (n >= 23) {
			cout << "Sagittarius\n";
		}
		else {
			cout << "Scorpio\n";
		}
	}
	else if (s == "Dec") {
		if (n >= 22) {
			cout << "Capricorn\n";
		}
		else {
			cout << "Sagittarius\n";
		}
	}
	else if (s == "Jan") {
		if (n >= 21) {
			cout << "Aquarius\n";
		}
		else {
			cout << "Capricorn\n";
		}
	}
	else if (s == "Feb") {
		if (n >= 20) {
			cout << "Pisces\n";
		}
		else {
			cout << "Aquarius\n";
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
