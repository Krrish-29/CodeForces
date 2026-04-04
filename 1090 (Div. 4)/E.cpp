#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    // just xor of all possible comb of 2 elems in array
    vector<int>nums(n);
    for(int &num:nums){
        cin >> num;
    }
    if(n==1) cout << nums[0] <<endl;
    else{
        int maxXor=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                maxXor=max(maxXor,nums[i]^nums[j]);
            }
        }
        cout << maxXor <<endl;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}