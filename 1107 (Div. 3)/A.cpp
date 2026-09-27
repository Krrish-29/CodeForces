#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    if(x%y==0) cout<< "YES" << "\n";
    else cout <<  "NO" <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}