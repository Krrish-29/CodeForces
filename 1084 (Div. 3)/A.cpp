#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int>nums(n);
    for(int &num:nums) cin >> num ;
    int maxEle=0,count=0;
    for(int i=0;i<n;i++){
        maxEle=max(maxEle,nums[i]);
    }
    for(int i=0;i<n;i++){
        if(maxEle==nums[i]) count++;
    }
    cout << count <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}