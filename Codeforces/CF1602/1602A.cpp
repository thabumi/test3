#include <bits/stdc++.h>

using namespace std;

void run_case(){
	string s;
	cin >> s;
	char c = s[0];
	int ind=0;
	for (int i = 0;i<s.size();i++){
		if(c>s[i]){
			c=s[i];
			ind=i;
		}
	}
	s.erase(ind,1);
	cout << c << " "<< s <<'\n';
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
#include <bits/stdc++.h>

using namespace std;

void run_case(){
	
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

