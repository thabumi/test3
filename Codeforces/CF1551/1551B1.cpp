#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void run_case(){
	string s;
	cin>>s;
	vector<int> b('z'-'a'+1);
	for(int i=0;i<b.size();i++){
		b[i]=0;
	}
	for(int i=0;i<s.size();i++){
		b[(int)(s[i]-'a')]++;
		if(b[(int)(s[i]-'a')]>2){
			b[(int)(s[i]-'a')]=2;
		}
	}
	int res=0;
	for(int i=0;i<b.size();i++){
		res+=b[i];
	}
	res/=2;
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
