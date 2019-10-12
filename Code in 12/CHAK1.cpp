#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first 
#define ss second
#define pb(x) push_back(x)
#define testcase(T) int T;cin>>T;while(T--)
#define mp(x,y) make_pair(x,y)
#define in(x) insert(x)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define M 1000000007
#define sz(a) (int)a.size()
#define all(v) v.begin(), v.end()
#define mem(arr,val) memset(arr,val,sizeof(arr)) //For "0" and "-1"                  

int main(){
	int t;
	cin>>t;
	assert(1<=t && t<=1e5);
	while(t--){
		int n,ans=0,cnt=0;
		cin>>n;
		assert(1<=n && n<=1e9);
		while(n){
			cnt++;
			if(n%2) ans++;
			n /= 2;
		}
		if(cnt!=ans) ans=cnt-1;
		cout<<ans<<endl;
	}
}