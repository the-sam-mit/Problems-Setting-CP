#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 998244853

vector<int> v[112345];
int vis[112345]={0};
ll fav[112345], g;

void dfs(int u){
	vis[u] = 1;
	g = __gcd(g, fav[u]);
	for(auto it:v[u]){
		if(!vis[it]){
			dfs(it);
		}
	}
}

int main(){
	int n,m,x,y;
	cin>>n>>m;
	for (int i = 1; i <= n; ++i){
		cin >> fav[i];
	}
	for(int i=1; i<=m; i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	ll ans = 1;
	for(int i=1; i<=n; i++){
		if(!vis[i]){
			g = fav[i];
			dfs(i);
			ans = (ans * g)%M;
		}
	}
	cout << ans << endl;
}