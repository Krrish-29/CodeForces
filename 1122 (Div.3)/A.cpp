#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    int minEle=INT_MAX;
    int ele;
    for(int i=0;i<3;i++){
        cin >> ele;
        minEle=min(minEle,ele);
    }
    cout << n-minEle <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}