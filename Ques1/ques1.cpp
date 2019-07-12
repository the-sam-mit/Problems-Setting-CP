#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ff first 
#define ss second
#define pb(x) push_back(x)
#define testcase(t) int t;cin>>t;while(t--)
#define mp(x,y) make_pair(x,y)
#define in(x) insert(x)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define PI 3.14159265358979323846
#define SP(x) setprecision(x)
#define reflex ios_base::sync_with_stdio(false);cin.tie(NULL)
#define M 1000000007

vector<pair<int,int> >v[100005];
int vis[100005];
int t=0;
int low[100005],disc[100005];
set<int> bridge;

void solve(int x,int par=-1){
	vis[x]=1;
	t++;
	low[x]=disc[x]=t;
	rep(i,0,(int)v[x].size()-1){
		int child=v[x][i].ff;
		int ind=v[x][i].ss;
		if(child==par) continue;
		if(vis[child]==0){
			solve(child,x);
			low[x]=min(low[x],low[child]);
			if(low[child]>disc[x]) {bridge.in(ind);}
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	rep(i,0,m-1){
		int a,b;
		cin>>a>>b;
		v[a].pb(mp(b,i+1));
		v[b].pb(mp(a,i+1));
	}
	rep(i,0,n+2) vis[i]=0;
	rep(i,0,n-1){
		if(vis[i]==0) solve(i);
	}
	
	int x;
	cin>>x;
	int d_edge[x];
	
	int cnt=0;
	rep(i,0,x-1){
		cin>>d_edge[i];
		if(bridge.find(d_edge[i])!=bridge.end()){
					cnt++;
		}
	}
	cout<<cnt<<endl;
}