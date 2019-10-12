#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n,k,x;
	cin>>n>>k;
	assert(1<=n && n<=1e5);
	assert(1<=k && k<=1e9);
	vector<ll> v;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		assert(1<=a[i] && a[i]<=1e9);
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		x = lower_bound(v.begin(), v.end(), a[i]+k) - v.begin();
		cout<<x<<endl;
	}
}