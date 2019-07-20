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
 
bool cmp(pair<ll,ll> &a, pair<ll,ll> &b){
	if(a.ss == b.ss) return a.ff<a.ss;
	return a.ss<b.ss;
}

int main(){
	int n,x,r;
	cin>>n;
	vector<pair<ll,ll> >v;
	rep(i,1,n){
		cin>>r>>x;
		v.pb(mp(x-r,x+r));
	}
	sort(v.begin(), v.end(), cmp);
	int i=v[0].ss,cnt=1;
	rep(j,1,n-1){
		if(v[j].ff >= i){
			i=v[j].ss;
			cnt++;
		}
	}
	cout<<n-cnt<<endl;
} 