#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb(x) push_back(x)
#define testcase(t) int t;cin>>t;while(t--)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define sz(a) (int)a.size()
#define endl "\n"
#define mem(arr,val) memset(arr,val,sizeof(arr)) //For "0" and "-1"                  
 
const int SIZE = 200005;
 
vector<int> v[SIZE];
int vis[SIZE];
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
int edg=0;
bool flag=true;
 
void dfs(int x){
    edg++;
    for(int i=0;i<v[x].size();i++){
        if(vis[v[x][i]]==0){
            vis[v[x][i]]=1;
            dfs(v[x][i]);
        }
    }
}
 
int main() {
	int n,m,x,y;
	cin>>n>>m;
	rep(i,1,m){
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	mem(vis,0);
	rep(i,1,n){
		if(!vis[i]){
			if(edg) flag=false;
			dfs(i);
		}
	}
	if(flag && n==m) cout<<"Yaa\n";
	else cout<<"Noo\n";
}