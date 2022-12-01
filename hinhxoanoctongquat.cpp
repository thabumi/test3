#include <bits/stdc++.h>

using namespace std;


void run_case(){
	int n,m;
	cin>>n>>m;
	vector <int> v(n*m+1);
	for(int i=1;i<=n*m;i++){
//		cin>>v[i];
		v[i] = i;
	}
	
	sort(v.begin()+1,v.end());// sap xep thu tu
	int chkr=v[1]-1;
	int ind=1;// chi so de cho vao bang
	vector<vector<int> > s(n+1);// thiet lap bang
	for(int i=1;i<=n;i++){
		s[i].resize(m+1);// bang rong de thuan tien tinh toan
		for(int j=1;j<=m;j++){
			s[i][j]=chkr;// cho gia tri kiem tra de tranh ghi de gia tri
		}
	}
	int k=m;// chieu ngang ung voi tung vong
	int l=n;// chieu doc ung voi tung vong
	/* dien so vao bang 
	i la hoanh do, j la tung do */
	while(k>0&&l>0){
		if(k==l&&l==1){
			break;
		}
		// cho gia tri cho canh ngang tren
		for(int i=(m-k)/2+1;i<(m+k)/2;i++){
			if(s[(n-l)/2+1][i]==chkr){
				s[(n-l)/2+1][i]=v[ind];
				ind++;
			}
		}
		// cho gia tri cho canh doc phai
		for(int j=(n-l)/2+1;j<(n+l)/2;j++){
			if(s[j][(m+k)/2]==chkr){
				s[j][(m+k)/2]=v[ind];
				ind++;
			}
		}
		// cho gia tri cho canh ngang duoi
		for(int i=(m+k)/2;i>(m-k)/2+1;i--){
			if(s[(n+l)/2][i]==chkr){
				s[(n+l)/2][i]=v[ind];
				ind++;
			}
		}
		// cho gia tri cho canh doc trai
		for(int j=(n+l)/2;j>(n-l)/2+1;j--){
			if(s[j][(m-k)/2+1]==chkr){
				s[j][(m-k)/2+1]=v[ind];
				ind++;
			}
		}
		k-=2;
		l-=2;
	}
	// truong hop k=l=1 can xet rieng do moi lan cho
	// gia tri deu bo lai gia tri cuoi cung cua doan
	if(k==1&&l==1){
		s[(n+1)/2][(m+1)/2]=v[ind];
	}
	
	// in
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<'\n';
	}
}	
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

