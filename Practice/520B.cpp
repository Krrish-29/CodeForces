// Two Buttons
// one approach is to use bfs/dfs to explore all possible combinations
// other approach is to use bits , and even flip the question and use 
// divide by 2 and add 1 on m to convert it into n, which is easier
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin >> n >> m;
    if(n>=m) {
        cout << n-m << endl; 
    }
    else{
        unordered_set<int>seen;
        queue<pair<int,int>>q; // value , moves
        q.push({n,0});
        seen.insert(n);
        while(!q.empty()){
            auto [x,moves] = q.front();q.pop(); 
            if(x == m){
                cout << moves << endl;
                break;
            }
            if(!seen.count(2*x) && x < m) {
                q.push({2*x,moves+1});
                seen.insert(2*x);
            }
            if(!seen.count(x-1)) {
                q.push({x-1,moves+1});
                seen.insert(x-1);
            }
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}