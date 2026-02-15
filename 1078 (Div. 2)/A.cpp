#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    int n,w;
    while(t--){
        cin >> n >> w ;
        int boxes=n/w;
        
        cout <<boxes*(w-1)+ n-(boxes*w)<<"\n";
    }
    return 0;
}