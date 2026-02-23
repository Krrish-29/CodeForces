#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    string s;
    cin >> s;
    int blocks=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            blocks++;
        }
    }
    if(s[0]!=s[n-1]) blocks++;
    cout << min(n,blocks) <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}