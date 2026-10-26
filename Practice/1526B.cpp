// I Hate 1111
// very complicated problem requring knowledge of number theory, specially Chicken McNugget Theorem
// but first observation is that except 11 and 111 all other can be derived from them 
// 1,111 = 101×11 and 11,111 = 111*100 + 11 and so on
// then second oversation is the theorem which states that any two prime numbers cannot represent m*n - m - n
// at max any number greater than it can be represented and any number less may or may not be (we need to check for it)
// there for 111*11 - 11 - 111 is 1099 therefore any number greater than equal to 1100 can be formed
// any number we can check by brute forceing the formula x = 11*a + 111*b => (x - 111*b) == 11*a
// since (x - 111*b) will be a multiple of 11 (x - 111*b)%11 will be 0 
// using a lopp for b which can go at max 1100/11 => 10 we can check numbers less than 1100

// original idea was to use bfs/dfs and reduce any of the possible 1's value till we get 0 
// but due to such large search space it was not possible
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x;cin >> x;
    bool ans = false;
    if(x >= 1100) ans=true;
    else{
        for(int b=0;b<11;b++){
            if ((( x - 111*b ) >= 0) &&  ((x - 111*b)%11 ==  0)) {
                ans = true;
                break;
            } 
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}