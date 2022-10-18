#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sellstock(vector<ll> prices){
    ll least = INT_MAX; //least = biggest possible number.
    ll overallprofit = 0;
    ll profitifsoldtday = 0;

    for(auto i : prices){
        if(i < least)
            least = i;
        profitifsoldtday = i - least;
        if(overallprofit < profitifsoldtday)
            overallprofit = profitifsoldtday;
    }
    return overallprofit;
}

void solution(void){
    ll n;
    cin>>n;
    vector<ll> prices;
    while(n--){
        ll i;
        cin>>i;
        prices.push_back(i);
    }
    cout<<sellstock(prices)<<"\n";
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