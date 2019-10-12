#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n,k,x;
	cin>>n>>k;
	vector<ll> v;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		x = lower_bound(v.begin(), v.end(), a[i]+k) - v.begin();
		cout<<x<<endl;
	}
}