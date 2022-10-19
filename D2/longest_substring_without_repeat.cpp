#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solution(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int x=0;
	for(int i = 0; i< s.length()-1; i++){
		if(s[i]==s[i+1])
			++x;
	}
	cout<<x<<"\n";
}


int32_t main()
{
	ll t;
	cin>>t;
	while(t--){
		solution();
	}
return 0;
}