#include <bits/stdc++.h>
#define ll long long int
using namespace std;

 int maxSubArray(vector<ll>& nums) {
        ll maxSum = nums[0];
        ll currSum = 0;
        for(ll i = 0; i<nums.size() ; i++){
            currSum += nums[i];
            // cout<< maxSum<<"\t"<<currSum<<"\n";
            if(currSum>maxSum){
                maxSum=currSum;
            }
            
            if(currSum<0){
                currSum =0;
            }
            // maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }

void solution(){
    ll n;
    cin>>n;
    vector<ll> elements;
    while(n--){
        ll i;
        cin>>i;
        elements.push_back(i);
    }
    cout<<maxSubArray(elements)<<endl;
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