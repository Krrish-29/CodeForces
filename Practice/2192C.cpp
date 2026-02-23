#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,h,k;cin >> n >> h >> k;
    vector<long long>mag(n);
    for(long long &num:mag){
        cin >> num ;
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=mag[i];
    }
    long long reloads=h/sum;
    h-=(sum*reloads);
    long long time=k*reloads+n*reloads;
    if(h==0){
        time-=k;
    }
    else{
        vector<long long>suffixMax(n);
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(mag[i+1],suffixMax[i+1]);
        }
        long long minEle=LLONG_MAX,currHealth=0;
        for(int i=0;i<n;i++){
            minEle=min(mag[i],minEle);
            time++;
            currHealth+=mag[i];
            if(currHealth+max(0LL,suffixMax[i]-minEle)>=h) break;
        }
    }
    cout << time <<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}