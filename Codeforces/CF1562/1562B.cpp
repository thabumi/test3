#include <bits/stdc++.h>

using namespace std;
void run_case(){
	int k;
	string n;
	cin>>k>>n;
	size_t found=n.find('4');
	if(found!=string::npos){
		cout<<1<<'\n'<<4<<'\n';
		return;
	}
	found=n.find('6');
	if(found!=string::npos){
		cout<<1<<'\n'<<6<<'\n';
		return;
	}
	found=n.find('8');
	if(found!=string::npos){
		cout<<1<<'\n'<<8<<'\n';
		return;
	}
	found=n.find('9');
	if(found!=string::npos){
		cout<<1<<'\n'<<9<<'\n';
		return;
	}
	found=n.find('1');
	if(found!=string::npos){
		cout<<1<<'\n'<<1<<'\n';
		return;
	}
	found=n.find('2');
	if(found!=string::npos){
		if(found>0){
			cout<<2<<'\n';
			cout<<n[0]<<2<<'\n';
			return;
		}
		string m=n;
		m.erase(0,1);
		size_t mfound=m.find('5');
		if(mfound!=string::npos){
			cout<<2<<'\n'<<25<<'\n';
			return;
		}
		mfound=m.find('7');
		if(mfound!=string::npos){
			cout<<2<<'\n'<<27<<'\n';
			return;
		}
		mfound=m.find('2');
		if(mfound!=string::npos){
			cout<<2<<'\n'<<22<<'\n';
			return;
		}
		cout<<2<<'\n'<<33<<'\n';
		return;
	}
	found=n.find('5');
	if(found!=string::npos){
		if(found>0){
			cout<<2<<'\n';
			cout<<n[0]<<5<<'\n';
			return;
		}
		string p=n;
		p.erase(0,1);
		size_t pfound=p.find('5');
		if(pfound!=string::npos){
			cout<<2<<'\n'<<55<<'\n';
			return;
		}
		pfound=p.find('7');
		if(pfound!=string::npos){
			cout<<2<<'\n'<<57<<'\n';
			return;
		}
		cout<<2<<'\n'<<33<<'\n';
		return;
	}
	found=n.find('3');
	if(found!=string::npos){
		string q=n;
		q.erase(found,1);
		size_t qfound=q.find('3');
		if(qfound!=string::npos){
			cout<<2<<'\n'<<33<<'\n';
			return;
		}
		cout<<2<<'\n'<<77<<'\n';
		return;
	}
	cout<<2<<'\n'<<77<<'\n';
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
