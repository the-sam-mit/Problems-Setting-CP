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

long long int power(long long int a,long long int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2==0){
        long long int x=power(a,b/2);
        return((x*x)%M);
    }
    else{
        long long int x=power(a,b/2);
        x=(x*x)%M;
        return((x*a)%M);
    }
}

int main(){
    testcase(t){
        ll n;
        cin>>n;
        n=n%M;
        ll num=(((3*n*n)%M)-((3*n)%M)+2+M)%M;
        ll den=(((((3*n)%M)-1+M)%M)*(((3*n)%M)+2))%M;

        ll gcd=__gcd(num,den);
        num/=gcd;
        den/=gcd;

        ll ans=power(den,M-2);
        cout<<ans%M<<endl;
    }
}