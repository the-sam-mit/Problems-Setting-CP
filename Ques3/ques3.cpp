#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb(x) push_back(x)
#define in(x) insert(x)
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define bfor(i,a,b) for(int i=a;i>=b;i--)
#define PI 3.14159265358979323846
#define SP(x) setprecision(x)
#define M 1000000007
#define reflex ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    reflex;
    int n;
    cin>>n;
    ll a[n],sum=0;
    ffor(i,0,n){cin>>a[i];sum+=a[i];}
    if(sum%3!=0){cout<<"0\n";return 0;} 
    ll cnt[n]={0};
    ll x[n]={0};
    ll s=sum;
    sum=0;
    
    bfor(i,n-1,0){
        sum+=a[i];
        if(sum==s/3)
            x[i]=1;
        else x[0]=0;
    }
    cnt[n-1]=x[n-1];
    bfor(i,n-2,0){
        cnt[i]=cnt[i+1]+x[i];
    }
    
    sum=0;
    ll ans=0;
    ffor(i,0,n-2){
        sum+=a[i];
        if(sum==s/3) ans=ans+cnt[i+2];
    } 
    cout<<ans<<endl;
}