#include<bits/stdc++.h>
using namespace std;
void solve(){
    // sort and take - of nums 0 to 6 and add 7 normally
    vector<int>nums(7);
    for(int &num:nums){
        cin >> num;
    }
    sort(nums.begin(),nums.end());
    int sum=nums[6];
    for(int i=0;i<6;i++){
        sum+=(-1*nums[i]);
    }
    cout << sum <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}