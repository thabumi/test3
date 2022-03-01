#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	int giatri=1;
	for(int k=n;k>0;k-=2){
		if(k!=1){
		for(int i=(n-k)/2;i<((n+k)/2)-1;i++){
			a[i][(n-k)/2]=giatri;
			giatri++;
		}
		for(int j=(n-k)/2;j<((n+k)/2)-1;j++){
			a[((n+k)/2)-1][j]=giatri;
			giatri++;
		}
		for(int i=((n+k)/2)-1;i>(n-k)/2;i--){
			a[i][((n+k)/2)-1]=giatri;
			giatri++;
		}
		for(int j=((n+k)/2)-1;j>(n-k)/2;j--){
			a[(n-k)/2][j]=giatri;
			giatri++;
		}
	    }
	    if(k==1){
	    	a[(n-1)/2][(n-1)/2]=n*n;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
