#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vpii vector<pii>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define el <<"\n"
#define sp <<" "
#define sps <<" "<<
#define br break
#define co continue

#define FILE_NAME ""
#define fio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)

int n,m,q,type,v1,v2;
vector<set<int>> edge(200005);
vi is_max_now(200005,1);
int ans;

void add( int v1, int v2 )
{
    //cout<<v1 sps v2 el;
    edge[v1].insert(v2);
    edge[v2].insert(v1);
    if(v1>v2)
        if(is_max_now[v2]==1) {is_max_now[v2]=0;ans--;}
    if(v2>v1)
        if(is_max_now[v1]==1) {is_max_now[v1]=0;ans--;}

}

void del( int v1, int v2 )
{
    edge[v1].erase(v2);
    edge[v2].erase(v1);
    if( v1>v2 ){
        auto p = edge[v2].end();
        if(edge[v2].size()==0||v2>*(--p)) {is_max_now[v2]++;ans++;}
    }

    if( v2>v1 ){
        auto p = edge[v1].end();
        if(edge[v1].size()==0||v1>*(--p)) {is_max_now[v1]++;ans++;}
    }
}

void cal()
{
    cout<<ans el;
}

int main()
{
    fio;
    srand(time(NULL));
    //freopen(FILE_NAME".inp","r",stdin);
    //freopen(FILE_NAME".out","w",stdout);

    cin>>n>>m;
    ans=n;
    for( int i=0; i<m; i++ ) {
        cin>>v1>>v2;
        add(v1,v2);
    }

    cin>>q;

    for( int i=0; i<q; i++ ){
        cin>>type;
        if(type==1){
            cin>>v1>>v2;
            add(v1,v2);
        }
        if(type==2){
            cin>>v1>>v2;
            del(v1,v2);
        }
        if(type==3){
            cal();
        }
    }

}
