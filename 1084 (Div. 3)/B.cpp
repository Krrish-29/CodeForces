#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int>nums(n);
    for(int &num:nums) cin >> num;
    bool sorted=true;
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]) sorted=false;
    }
    if(sorted) cout << n << "\n";
    else cout << 1 <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}