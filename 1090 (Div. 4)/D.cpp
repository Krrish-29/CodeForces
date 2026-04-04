#include<bits/stdc++.h>
using namespace std;
void solve(){
    // either take 1 2 4 ... 2^n (expo)
    // tried primes but 3 5 7 ... have gcd of 1
    // trick take multiplication of primes 
    // also start with 1 till <=n (cause 0 to < n was not working )
    int n;cin >> n;
    int limit=200000;
    vector<bool>primes(limit+1,true);
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i*i<=limit;i++){
        if(primes[i]){
            for(int j=i*i;j<=limit;j+=i) primes[j]=false;
        }
    }
    vector<long long>prime;
    for(int i=0;i<=limit;i++) if(primes[i]) prime.push_back(i);

    for(int i=1;i<=n;i++){
        cout << prime[i]*prime[i+1] <<  " ";
    }
    cout << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin >> t;
    while(t--) solve();
    return 0;
}