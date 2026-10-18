// IQ test
// the approach is to count evens and odds and if freq of even is 1 then
// the different number in eveness is that only even number else the only odd number
// also return i+1 since we are using 1 based indexing
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    int even=0,odd=0;
    vector<int>nums(n);
    for(int &num:nums){
        cin >> num;
        if(num%2==0) even++;
        else odd++;
    }
    int check = even == 1 ? 0 : 1;  // check for even or odd
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2 == check) {
            cout << i+1 << endl;
            break;
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}