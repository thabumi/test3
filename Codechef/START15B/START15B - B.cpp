#include <bits/stdc++.h>

using namespace std;

long long Count(long long n) {
    long long count=0;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            count++;
            n /= d;
        }
    }
    if (n > 1){
    	count++;
	}
    return count;
}
void run_case(){
	long long n;
	cin>>n;
	long long a,b;
	cin>>a>>b;
	if(a<=0&&b<=0){
		if(n%2==0){
			cout<<a<<'\n';
		}
		else{
			cout<<b<<'\n';
		}
		return;
	}
	if(a>0&&b<=0){
		long long res=0;
		while(n%2==0){
			n/=2;
			res+=a;
		}
//		if(n!=1){
//			res+=b;
//		}
		cout<<res<<'\n';
		return;
	}
	if(a<=0&&b>0){
		long long res=0;
		if(n%2==0){
			res+=a;
		}
		while(n%2==0){
			n/=2;
		}
		if(n==1){
			cout<<res<<'\n';
			return;
		}
		long long p= Count(n);
		cout<<res+b*p<<'\n';
		return;
	}
	if(a>0&&b>0){
		long long res=0;
		while(n%2==0){
			n/=2;
			res+=a;
		}
		if(n==1){
			cout<<res<<'\n';
			return;
		}
		long long p= Count(n);
		cout<<res+b*p<<'\n';
		return;
	}
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

