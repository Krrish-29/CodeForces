#include<bits/stdc++.h>
using namespace std;
void solve(){
    // we cannot exceed 67 and maximum of min(x and y) will be when y is x+1
    int n;cin >> n;
    if(n==67) cout << n << endl;
    else cout << n+1 << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}