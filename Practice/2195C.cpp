#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int>arr(n);
    for(int &num:arr) cin >> num;
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]||arr[i-1]+arr[i]==7) {
            count++;
            i++;
        }
    }
    cout << count << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}