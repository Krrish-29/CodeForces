// Vacations
// ai equals 0, if on the i-th day of vacations the gym is closed and the contest is not carried out;
// ai equals 1, if on the i-th day of vacations the gym is closed, but the contest is carried out;
// ai equals 2, if on the i-th day of vacations the gym is open and the contest is not carried out;
// ai equals 3, if on the i-th day of vacations the gym is open and the contest is carried out.

// the problem states that on a particular day we have some activities do to which can be either rest, gym or contest
// and we cannot do gym or contest for two consecutive days, and the activities available on a day are mentioned above with codes
// therefore we can see that resting can be done anyday without any problem 
// and at end we need to find the minimum number of rest days 
// and because of code 3 having options to do either gym or contest (or rest is always available) the problem become overlapping with 
// mulitple subproblems leading to dp

// always start with rest day with cost 1 and go to next idx, the rest day can be taken on any day 
// if current activity is 1 and prev activity is not 1 we can use the current activity  
// if current activity is 2 and prev activity is not 2 we can use the current activity 
// if current activity is 3 and prev activity is not 1 we can do activity 1 , or prev activity is not 2 we can do activity 2

#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& activities,int idx,int prevActivity,vector<vector<int>>& dp){
    if(idx == activities.size()) return 0;
    if(dp[idx][prevActivity] != -1) return dp[idx][prevActivity];
    int minRest = 1+helper(activities,idx+1,0,dp);
    if(activities[idx] == 1 && prevActivity != 1){
        minRest = min(minRest,helper(activities,idx+1,1,dp));
    }
    else if(activities[idx] == 2 && prevActivity != 2){ 
        minRest = min(minRest,helper(activities,idx+1,2,dp));
    }
    else if(activities[idx] == 3){
        if(prevActivity != 1) minRest = min(minRest,helper(activities,idx+1,1,dp));
        if(prevActivity != 2) minRest = min(minRest,helper(activities,idx+1,2,dp));
    }
    return dp[idx][prevActivity] = minRest;
}
void solve(){
    int n;cin >> n;
    vector<int>activities(n);
    for(int &x:activities){
        cin >> x;
    }
    vector<vector<int>>dp(n,vector<int>(3,-1));
    int ans = helper(activities,0,0,dp);
    cout << ans << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}