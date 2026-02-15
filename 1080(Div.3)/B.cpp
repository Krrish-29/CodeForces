#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        vector<int> vis(n+1,false);
        bool sorted = true;
        for (int i = 1 ; i <= n; i++) {
            cin >> arr[i];
        }
        for(int i=1;i<=n;i++){
            if(vis[i]) continue;
            vector<int>val;
            vector<int>idx;
            for(int j=i;j<=n;j*=2){
                val.push_back(arr[j]);
                idx.push_back(j);
                vis[j]=true;
            }
            sort(val.begin(),val.end());
            for(int x=0;x<idx.size();x++){
                if(idx[x]!=val[x]){
                    sorted=false;
                    break;
                }
            }
        }

        cout << (sorted ? "YES" : "NO") << "\n";
    }
    return 0;
}
