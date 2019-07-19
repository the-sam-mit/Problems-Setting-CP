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
 
const int SIZE = 1000005;
int isprime[SIZE];
void sieve(){
	isprime[1]=0; 
	rep(i,2,SIZE-3) isprime[i]=1;
	for(int i=2;i*i<=SIZE-3;i++){
		if(isprime[i]==1)
			for(int j=i;j<=SIZE-3;j+=i)
				if(i!=j) isprime[j]=0;
	}
}

int main() {
	sieve();
	int n;
	cin>>n;
	ll a[n+1];
	rep(i,1,n) cin>>a[i];
	ll sum[n+1];
	mem(sum,0);
	rep(i,1,n){
		if(a[i]==3) sum[i]+=sum[i-1]+2; 
		else if(isprime[a[i]+1]) sum[i]+=sum[i-1]+(a[i]);
		else sum[i]+=sum[i-1];
	}
	int t,l,r;
	cin>>t;
	while(t--){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
}
