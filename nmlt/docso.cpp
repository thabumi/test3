#include <iostream>
#include <string>

using namespace std;

string one[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string thousand[3] = {"", "thousand", "million"};
string read(char c) {
    return one[(int)(c - '0')];
}

string twodig(string k) {
	if (k.size() == 1) {
		return read(k[0]);
	}
    if (k[0] == '0') {
        return read(k[1]);
    }
    if (k[0] == '1') {
    	switch (k[1]) {
    		case '0': {
    			return "ten";
				break;
			}
			case '1': {
				return "eleven";
				break;
			}
			case '2': {
				return "twelve";
				break;
			}
			case '4': {
				return "fourteen";
				break;
			}
			case '3': {}
			
			case '5': {}
			case '6': {}
			case '7': {}
			case '8': {}
			case '9': {
				string t = tens[(int)(k[1] - '0')];
				t.pop_back();
				t += "een";
				return t;
			}
		}
	}
	string res = tens[(int)(k[0] - '0')];
	if (k[1] == '0') {
		return res;
	}
	return (res + '-' + one[(int)(k[1] - '0')]);
}

string below1k(string k) {
    while (k.size() > 1 && k[0] == '0') {
        k.erase(0, 1);
    }
    if (k == "0") {
        return "";
    }
    string res = "";
    if (k.size() == 3) {
        res = res + read(k[0]) + " hundred " + twodig(k.substr(1, 2));
        return res;
    }
    return twodig(k);
}

int main() {
    string s;
    cin >> s;
    if (s == "0") {
    	cout << "zero";
    	return 0;
	}
    string res = "";
    string neg = "";
    if (s[0] == '-') {
    	neg = "negative ";
    	s.erase(0, 1);
	}
	int cnt = 0;
	string three = "";
	for (int i = s.size() - 1; i >= 0; i--) {
		three = s[i] + three;
		if (three.size() == 3 || i == 0) {
			bool all0 = true;
			for (int i = 0; i < three.size(); i++) {
				if (three[i] != '0') {
					all0 = false;
				}
			}
			if (!all0) {
				res = " " + below1k(three) + " " + thousand[cnt] + res;	
			}
			cnt++;
			three = "";
		}
	}
	while (res[0] == ' ') {
		res.erase(0, 1);
	}
	res = neg + res;
	cout << res;
    return 0;
}