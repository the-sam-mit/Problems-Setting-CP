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
#define sz(a) (int)a.size()

int main(){
    testcase(t){
        string s;
        cin>>s;
        assert(s.size()<=100000);
        ll ans = 0;
        rep(i,0,sz(s)-2){
            if(s[i]=='a' && s[i+1]=='b') ans++;
        }
        cout<<ans<<endl;
    }
}