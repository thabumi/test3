#include <bits/stdc++.h>

using namespace std;
void run_case(){
	string A;
	string B;
	cin>>A>>B;
	if(A=="0"&&B=="0"){
		cout<<0;
		return;
	}
	for(int i=0;i<A.size()/2;i++){
		swap(A[i],A[A.size()-1-i]);
	}
	for(int i=0;i<B.size()/2;i++){
		swap(B[i],B[B.size()-1-i]);
	}
	string Fill1="";
	//int x=A.size();
	//int y=B.size();
	//for(int i=1;i<=abs(x-y);i++){  (codefun khong dich truc tiep duoc)
	for(int i=1;i<=abs(A.size()-B.size());i++){
		Fill1+='0';
	}
	
	if(A.size()>B.size()){
		B+=Fill1;
	}
	else{
		A+=Fill1;
	}
	for(int i=1;i<=50;i++){
		A+='0';
		B+='0';
	}
	int rem=0;
	string res[A.size()];
	for(int i=0;i<A.size();i++){
		res[i]="";
	}
	for(int i=0;i<A.size();i++){
		for(int j=0;j<B.size();j++){
			int r=(A[i]-'0')*(B[j]-'0')+rem;
			char t=(char)(r%10+'0');
			rem=r/10;
			res[i]+=t;			
		}
		for(int q=1;q<=i;q++){
			res[i]='0'+res[i];
		}
	}
	rem=0;
	int M=res[0].size();
	for(int i=0;i<A.size();i++){
		if(res[i].size()>M){
			M=res[i].size();
		}
	}
	for(int i=0;i<A.size();i++){
		while(res[i].size()<M){
			res[i]+='0';
		}
	}
	
	string result="";
	for(int i=0;i<M;i++){
		int sum=0;
		for(int j=0;j<A.size();j++){
			sum+=(int)(res[j][i]-'0');
			sum+=rem;
			rem=0;
		}
		char t=(char)(sum%10+'0');
		rem=sum/10;
		result+=t;
	}
	int k=result.size()-1;
	while(result[k]=='0'){
		result.erase(k,1);
		k--;
	}
	for(int i=0;i<result.size()/2;i++){
		swap(result[i],result[result.size()-1-i]);
	}
	for(int i=0;i<result.size();i++){
		cout<<result[i];
		
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}
