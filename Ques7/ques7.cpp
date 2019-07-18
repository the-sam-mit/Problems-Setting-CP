#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define testcase(t) int t;cin>>t;while(t--)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define nrep(i,a,b)  for (__typeof((b)) i=(b);i>=(a);i--)
#define reflex ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1122334
 
const int SIZE = 1123456;
ll fib[SIZE];
ll b[3];int k=2;

vector<vector<ll> > mul(vector<vector<ll> > A, vector<vector<ll> > B){
    vector<vector<ll> > C(k+1, vector<ll>(k+1));
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            for(int x=1;x<=k;x++)
                C[i][j] = (C[i][j] + ((A[i][x]*B[x][j])%M) + M + M) % M;
        }
    }
        return C;
}

vector<vector<ll> > pow(vector<vector<ll> > A, ll p){
    if(p == 1)
        return A;
    if(p & 1)
        return mul(A,pow(A,p-1));
    vector<vector<ll> > X = pow(A,p/2);
        return mul(X,X);
}

ll func(ll n){
    if(n == 0)
        return 0;
    if(n <= 2)
        return b[n];
    
    vector<ll> F1(k+1);
    F1[1]=1;F1[2]=1;
    vector<vector<ll> > T(k+1,vector<ll>(k+1));
    T[1][1]=5;T[1][2]=-2;
    T[2][1]=1;T[2][2]=0;

    T = pow(T,n-2);
    ll res = 0;
    for(int i = 1;i<=k;i++){
        res = (res + ((T[1][i]*F1[i])%M) +M+M) % M;
    }
    return res % M;
}

void calcFib(){
	fib[0]=0;
	fib[1]=1;
	rep(i,2,SIZE-3){
		fib[i]=(fib[i-1]+fib[i-2])%M;
	}
}
 
int main() {
	// #ifndef ONLINE_JUDGE
  	//   freopen("input.txt", "r", stdin);
  	//   freopen("output.txt", "w", stdout);
	// #endif
	calcFib();
	b[1]=1;b[2]=1;
	testcase(t){
		ll n;
		cin>>n;
		ll g=(func(n)-fib[n%M]+M)%M;
		if(g<0 || g>=M) break;
		cout<<g<<endl;
	}
}
