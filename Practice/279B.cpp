// Books
// approach is since starting from a point the person will read all books
// and since the person start from some point and reads till either the time runs out or no books are left 
// brute force would be using 2 loops one to start and one to try to extend it 
// optimized we need to find the largest window of books that can be read in time t, sliding window
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,t;cin >> n >> t;
    vector<int>nums(n);
    for(int &num:nums){
        cin >> num;
    }
    int left=0,right=0,time=0,books=0,maxBooks=0;
    for(right = 0 ; right < n ; right++){
        time+=nums[right];
        while(left <= right && time > t){
            time -= nums[left];
            left++;
        }
        books = right - left + 1;
        maxBooks = max(books , maxBooks);
    }
    cout << maxBooks << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}