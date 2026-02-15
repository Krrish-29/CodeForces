#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,l;
    cin >> n >> l;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int start=arr[0],diff=0;
    for(int i=1;i<n;i++){
        diff=max(diff,arr[i]-start);
        start=arr[i];
    }
    double ans =max({(double)diff/2.0,(double)arr[0],(double)(l-arr[arr.size()-1])});
    cout << fixed << setprecision(10)<< ans << endl;
    return 0;
}