#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int length_substring(string s){
	vector<int> m(256, -1);

	int l = 0, r = 0;
	int n = s.size();
	int len = 0;

	while(r<n){
		if(m[s[r]]!= -1 )
			l = max(m[s[r]]+1, l);
		m[s[r]] = r;

		len = max(len, r - l + 1);
		r++;
	}
	return len;
}


void solution(){
	string s;
	cin>>s;
	cout<< length_substring(s)<<"\n";
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