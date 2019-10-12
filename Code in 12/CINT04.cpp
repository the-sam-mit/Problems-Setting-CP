#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007
#define SIZE 100003

int main(){
    int t;
    cin>>t;
    assert(1<=t && t<=1e5);
    while(t--){
        ll l,r;
        cin>>l>>r;
        assert(l<=r && -1e18<=l && r<=1e18);
        if(r<=0){
            cout<<"0\n";
            continue;
        }
        l = max(l-1,0ll);
        if     (r%4==1) r=1;
        else if(r%4==2) r++;
        else if(r%4==3) r=0;
        if     (l%4==1) l=1;
        else if(l%4==2) l++;
        else if(l%4==3) l=0;
        cout<<(r^l)<<endl;
    }
    
}   