#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define pb(x) push_back(x)
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define forn(i,a,b) for(int i=a;i<=b;i++)
#define PI 3.14159265358979323846
#define SP setprecision
#define M 1000007
#define reflex ios_base::sync_with_stdio(false)
map<ll,ll> m;
set<ll> s;
ll dp[100005];
ll func(ll val){
    if(dp[val]!=-1 && val!=-1){
        return dp[val];
    }
    auto it=s.lower_bound(val);
    if(it!=s.end())
        val=*it;
    else{
        dp[val]=0;
        return dp[val];  
    } 
    dp[val]=(max((val*m[val])+func(val+2),func(val+1)));
    return dp[val]; 
}
int main(){
    reflex;
    int n;
    cin>>n;
    ll a[n];
    ffor(i,0,n){ 
        cin>>a[i];
        m[a[i]]++;
        s.insert(a[i]);
    }
    ffor(i,0,100005) dp[i]=-1;
    sort(a,a+n);
    ll ans=func(-1);
    ffor(i,0,n) dp[i]=-1;
    cout<<ans<<endl;
}