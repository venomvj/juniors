#include <bits/stdc++.h>
#define ll long long int
using namespace std;

//first approach.

ll KthLargestElement(vector<ll> nums ,ll k){
    sort(nums.begin(), nums.end());
    return nums[k-1];

}

//2nd approach priority queue

// ll KthLargestElement(vector<ll> nums, ll k){
//     priority_queue<ll , vector<ll>> pq;
    // for(auto i : nums){
    //     pq.push(i);
    //     if(pq.size()>k)
    //         pq.pop();
    // } 


    // for(ll i = 0; i< nums.size();++i){
    //     pq.push(nums[i]);
    //     if(pq.size()>k)
    //         pq.pop();
    // }
//     return pq.top();
// }


void solution(){
    ll n;
    cin>>n;
    vector<ll> elements;
    while(n--){
        ll x ;
        cin>>x;
        elements.push_back(x);
    }
    ll k;
    cin>>k;

    // for(auto i : elements){
    //     cout<<i<<endl;
    // }

    cout<<KthLargestElement(elements,k)<<endl;
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