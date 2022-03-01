#include <iostream>
using namespace std;

void run_case(){
	int n,m;
	scanf("%d %d",&n,&m);
	int danger[n];
	for(int i=0;i<n;i++){
		danger[i]=0;
	}
	int count=n;
	for(int i=0;i<m;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		danger[min(u,v)]++;
		if(danger[min(u,v)]==1){
			count--;
		}
	}
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		int f;
		scanf("%d",&f);
		if(f==1){
			int u,v;
			scanf("%d %d",&u,&v);
			int m=min(u,v);
			danger[m]++;
			if(danger[m]==1){
				count--;
			}
		}
		else if(f==2){
			int u,v;
			scanf("%d %d",&u,&v);
			int m=min(u,v);
			danger[m]--;
			if(danger[m]==0){
				count++;
			}
		}
		else{
			printf("%d\n",count);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	run_case();
	return 0;	
}
