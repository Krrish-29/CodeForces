#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(abs(a-b),a+c-b) <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}