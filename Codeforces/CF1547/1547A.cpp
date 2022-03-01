#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int xa,ya;
	cin>>xa>>ya;
	int xb,yb;
	cin>>xb>>yb;
	int xf,yf;
	cin>>xf>>yf;
	int result;
	if(xa==xb&&xb==xf&&(yf-ya)*(yf-yb)<0){
		result=abs(ya-yb)+2;
	}
	else if(ya==yb&&yb==yf&&(xf-xa)*(xf-xb)<0){
		result=abs(xa-xb)+2;
	}
	else{
		result=abs(xa-xb)+abs(ya-yb);
	}
	cout<<result<<'\n';
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}
