#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		int l = s.size();
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for(int i=0;i<l;i++){
			int x = 'z'-(s[i]-'a');
			s[i] = (char)x;
		}
		cout<<s<<endl;
	}
}