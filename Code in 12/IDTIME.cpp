#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007
#define SIZE 100003

int main(){

    int n,m,k;
    cin>>n>>m>>k;
    assert(1<=n && n<=1e5);
    assert(1<=m && m<=1e5);    
    int cnt[n+2]={0};
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        assert(1<=x && x<=y && y<=n);    
        cnt[x] += 1;
        cnt[y+1] -= 1;
    }
    vector<int> v;
    for(int i=1;i<=m;i++){
        cnt[i] += cnt[i-1];
        if(cnt[i]>=k) v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<" ";
}