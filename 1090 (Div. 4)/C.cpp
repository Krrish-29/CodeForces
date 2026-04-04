#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int>nums(3*n);
    for(int i=0;i<3*n;i++) nums[i]=i+1;
    vector<int>ans(3*n);
    // 1 2 3
    // 1 2 3

    // 1 2 3  4 5 6
    // 1 3 4  2 5 6

    // 1 2 3  4 5 6  7 8 9
    // 1 4 5  2 6 7  3 8 9

    // 1 2 3  4 5 6  7 8 9  10 11 12
    // 1 5 6  2 7 8  3 9 10  4 11 12
    int startPoint=n+1;
    for(int i=0;i<n;i++){
        ans[3*i]=nums[i];
        ans[3*i+1]=startPoint;
        ans[3*i+2]=startPoint+1;
        startPoint+=2;
    }
    for(int i=0;i<3*n;i++) cout << ans[i] << " ";
    cout << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}