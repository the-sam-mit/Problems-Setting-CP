#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define reflex ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1000000007
#define sz(a) (int)a.size()
#define endl "\n"
#define all(v) v.begin(), v.end()
#define mem(arr,val) memset(arr,val,sizeof(arr)) //For "0" and "-1"                  
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int SIZE = 100005;
 
int main() {
	reflex;
	ll n,m,v;
	cin>>n>>m>>v;
	if(m>(((n-1)*(n-2))/2)+1 || m<n-1){
		cout<<"-1\n";
		return 0;
	}
	vector<pii> vw;
	int w=1;
	if(v==1) w=2;
	vw.pb(mp(v,w));
	rep(i,1,n){
		if(sz(vw)>=m) break;
		if(i!=w && i!=v) vw.pb(mp(v,i));
	}
	while(sz(vw)<m){
		rep(i,1,n){
			if(i==v || i==w) continue;
			rep(j,i+1,n){
				if(j==v || j==w || j==i) continue;
				vw.pb(mp(i,j));
				if(sz(vw)>=m) break;
			}
			if(sz(vw)>=m) break;
		}
	}
	for(auto it:vw){
		cout<<it.ff<<" "<<it.ss<<endl;
	}
}