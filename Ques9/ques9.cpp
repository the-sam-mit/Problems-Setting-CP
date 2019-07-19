#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define reflex ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1000000007
#define sz(a) (int)a.size()
#define endl "\n"
#define all(v) v.begin(), v.end()
#define mem(arr,val) memset(arr,val,sizeof(arr)) //For "0" and "-1"                  
 
int main() {
	ll n,k;
	cin>>n>>k;
	while(n>(2*k)) n=ceil(n/(2.0*k));
	if(n<=k) cout<<"Alex\n";
	else cout<<"Joe\n";
}
