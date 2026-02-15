#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num;
        bool yes=false;
        for(int i=0;i<n;i++){
            cin >> num;
            if(num==67) {
                yes=true;
            }
        }
        cout << (yes?"YES":"NO") <<endl;
    }
    return 0;
}