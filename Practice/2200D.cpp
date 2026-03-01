#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;cin >> n >> x >> y;
    vector<int>nums(n);
    for(int &num:nums) cin >> num ;
    
    vector<int>startEnd,center;
    
    for(int i=0;i<x;i++){
        startEnd.push_back(nums[i]);
    }

    for(int i=x;i<y;i++){
        center.push_back(nums[i]);
    }

    for(int i=y;i<n;i++){
        startEnd.push_back(nums[i]);
    }

    vector<int>lexiCenter;

    int minEle=min_element(center.begin(),center.end())-center.begin();
    for(int i=0;i<center.size();i++){
        lexiCenter.push_back(center[(minEle+i)%center.size()]);
    }
    int i=0;
    while(i<startEnd.size()){
        if(lexiCenter[0]>startEnd[i]){
            cout << startEnd[i] << " ";
        }
        else break;
        i++;
    }
    for(int j=0;j<lexiCenter.size();j++){
        cout << lexiCenter[j] << " ";
    }
    for(;i<startEnd.size();i++){
        cout << startEnd[i] << " ";
    }
    cout << "\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}