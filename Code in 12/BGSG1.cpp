#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first 
#define ss second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define in(x) insert(x)
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<=(b);i++)
#define sz(a) (int)a.size()

int main(){
    int n;
    cin>>n;
    assert(n<=26);
    string ch;
    set<string> s;
    rep(i,1,n){
        cin>>ch;
        s.in(ch);
    }
    string str;
    cin>>str;
    assert((int)str.size()<=100000);
    map<string,int> mm;
    rep(i,0,sz(str)-1){
        ch=str[i];
        mm[ch]++;
    }
    for(auto it:s){
        if(mm[it]==0){
            cout<<"Bad\n";
            return 0;
        }
    }
    cout<<"Good\n";
}