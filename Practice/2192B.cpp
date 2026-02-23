#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    string str;cin >> str;
    vector<int>ones,zeros;
    for(int i=0;i<n;i++){
        if(str[i]=='1') ones.push_back(i+1);
        else zeros.push_back(i+1);
    }
    if(zeros.size()%2==1&&ones.size()%2==0){
        if(zeros.size()<ones.size()){
            cout << zeros.size() << "\n";
            if(zeros.size()!=0){
                for(int &num:zeros) cout << num << " ";
                cout << "\n";
            } 
        }
        else{
            cout << ones.size() << "\n";
            if(ones.size()!=0) {
                for(int &num:ones) cout << num << " ";
                cout << "\n";
            }
        }
    }
    else if(zeros.size()%2==1){
        cout << zeros.size() << "\n";
        if(zeros.size()!=0){
            for(int &num:zeros) cout << num << " ";
            cout << "\n";
        } 
    }
    else if(ones.size()%2==0){
        cout << ones.size() << "\n";
        if(ones.size()!=0) {
            for(int &num:ones) cout << num << " ";
            cout << "\n";
        }
    }
    else {
        cout << -1 << "\n";
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}