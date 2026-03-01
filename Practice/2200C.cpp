#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    string s;cin >> s;
    stack<char>stack;
    for(int i=0;i<n;i++){
        if(!stack.empty()&&s[i]==stack.top()){
            stack.pop();
        }
        else{
            stack.push(s[i]);
        }
    }
    if(stack.empty()) cout << "YES" << "\n";
    else cout << "NO" <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}