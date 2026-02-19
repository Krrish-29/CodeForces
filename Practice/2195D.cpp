#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<long long>func(n);
    for(long long &num:func) cin >> num;

    vector<long long>ans(n);
    for(int i=1;i<n-1;i++) {
        ans[i]=(func[i+1]+func[i-1]-2*func[i])/2;
    }

    ans[0]=func[n-1];
    for(int i=1;i<n;i++){
        ans[0]-=ans[i]*(n-1-i);
    }
    ans[0]/=(n-1);

    ans[n-1]=func[0];
    for(int i=0;i<n-1;i++){
        ans[n-1]-=ans[i]*(i);
    }
    ans[n-1]/=(n-1);

    for(long long &num:ans) cout << num << " ";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}