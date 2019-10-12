#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007
#define SIZE 100003

int main(){
    int n;
    cin>>n;
    assert(1<=n && n<=1e5);
    ll a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        int c=0;
        while(a[i]>0){
            if(a[i]%2) c++;
            a[i] /= 2;
        }
        a[i] = c;
    }
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++){
        int c=0;
        while(b[i]>0){
            if(b[i]%2) c++;
            b[i] /= 2;
        }
        b[i] = c;
    }
    sort(a+1, a+n+1, greater<int>());
    sort(b+1, b+n+1, greater<int>());
    for(int i=1;i<=n;i++){
        if(a[i]>b[i]){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}   