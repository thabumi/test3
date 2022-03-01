#include <bits/stdc++.h>
using namespace std;
int h=0;
void tel(string s, string t, int f){
	string ss;
	for (int i=0; i<=f; i++){
		ss=s;
		for (int j=0;  j<i; j++){
			ss='1'+ss;
		}
		for (int j=i; j<f; j++){
			ss+='1';
		}
		if (ss==t){
			h=1;
			return ;
		}
		reverse(ss.begin(),ss.end());
		if (ss==t){
			h=1;
			return ;
		}
	}
	h=0;
	return ;
}
void hes(string s, string t){
	int v=0,vv=0;
	for (int i=0; i<s.size(); i++){
		if (s[i]=='1'){
			v++;
		}
	}
	for (int i=0; i<t.size(); i++){
		if (t[i]=='1'){
			vv++;
		}
	}
	if (v>vv){
		h=0;
		return ;
	}
	if (vv-v>0){
		 tel(s,t,vv-v);
	}
	if (h==1){
	   return ;
	}
	/*for (int i=0; i<vv-v; i++){
		s+='1';
	}*/
	if (s==t){
		h=1;
		return ;
	}
	reverse(s.begin(),s.end());
	if (s==t){
		h=1;
		return ;
	}
	h=0;
	return ;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	 long long n,m;
	 string s,s2,s3;
	 cin >> n >> m;
	 long long u=n;
	 if (n==m){
	 	cout <<"YES";
	 	return 0;
	 }
	 if (m%2==0){
	 	cout <<"NO";
	 	return 0;
	 }
	/* for (int i=62; i>=0; i--){
	 	if (n>=d[i]){
	 		n-=d[i];
	 		c[i]=1;
		 }
	 }
	 for (int i=62; i>=0; i--){
	 	if (m>=d[i]){
	 		m-=d[i];
	 		c2[i]=1;
		 }
	 }
	 for (int i=62; i>=0; i--){
	 	if (u>=d[i]){
	 		u-=d[i];
	 		c3[i]=1;
		 }
	 }*/
	 while(u%2==0){
	 	u/=2;
	 }
	 while(n>0){
	 	if (n%2==1){
	 		s+='1';
		 }else{
		 	s+='0';
		 }
		 n/=2;
	 }
	 while(m>0){
	 	if (m%2==1){
	 		s2+='1';
		 }else{
		 	s2+='0';
		 }
		 m/=2;
	 }
	 while(u>0){
	 	if (u%2==1){
	 		s3+='1';
		 }else{
		 	s3+='0';
		 }
		 u/=2;
	 }
	 reverse(s.begin(),s.end());
	 reverse(s2.begin(),s2.end());
	 reverse(s3.begin(),s3.end());
	hes(s,s2);
	if (h==1){
		cout <<"YES";
		return 0;
	}
	hes(s3,s2);
	if (h==1){
		cout <<"YES";
		return 0;
	}
	cout << "NO";
	return 0;
	
}
