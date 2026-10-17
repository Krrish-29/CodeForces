// Registration system 
// simple approach just store new userNames and return OK 
// and for seen ones update the freq of userName and return the name and freq before updating 
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<string>query(n);
    for(string &s:query){
        cin >> s;
    }
    unordered_map<string,int>map; // userName, freq
    for(string &s:query){
        if(!map.count(s)){
            map[s]++;
            cout << "OK" << endl;
        }
        else{
            cout << s << map[s] << endl;
            map[s]++;
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}