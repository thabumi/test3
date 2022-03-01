#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int W,H;
	cin>>W>>H;
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int w,h;
	cin>>w>>h;
	int w0=x2-x1;
	int h0=y2-y1;
	int t1=max(x1,W-x2);
	int t2=max(y1,H-y2);
	if((w+w0>W)&&(h+h0>H)){
		cout<<"-1\n";
	}
	else if(w+w0>W&&h+h0<=H){
		cout<<max(h-t2,0)<<'\n';
	}
	else if(w+w0<=W&&h+h0>H){
		cout<<max(w-t1,0)<<'\n';
	}
	else{
		int s=min(w-t1,h-t2);
		cout<<max(0,s)<<'\n';
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
