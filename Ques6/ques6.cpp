#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define pb(x) push_back(x)
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define forn(i,a,b) for(int i=a;i<=b;i++)
#define PI 3.14159265358979323846
#define SP setprecision
#define reflex ios_base::sync_with_stdio(false)

int a[100005]={0};
char ch[100005];
int main(){
    reflex;
    int n,c=0;
    cin>>n;
    ffor(i,0,n){
        cin>>ch[i];
        if(ch[i]=='H') a[i]=1;
        else a[i]=0;
        if(a[i]==1){ a[i]=-1;c++;}
        else a[i]=1;
    }
    int ans=a[0],maxx=a[0];
    ffor(i,1,n){
        maxx=max(a[i],maxx+a[i]);
        ans=max(ans,maxx);
    }        
    cout<<c+ans<<endl;
}