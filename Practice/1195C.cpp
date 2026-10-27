// Basketball Exercise
// the problem requires choosing 1 player at a particluar index form out of 2 teams options we have
// also option to skip a index as well , and since we need to find max sum of team height
// which is overlapping problem since at each index we have 3 options (skip ,take from 1,take from 2)
// and since a decision at a point affects future the problem is of dynamic programming
// using team0 and team1 to store height and going over teamSize (n) and prevTeam starting with -1
// try each choice out of 3 and adding height at index of player from team which we select 
// since the states change with index and prevTeam which we selected , the dp uses both (2d dp)
#include<bits/stdc++.h>
using namespace std;

long long helper(vector<int>& a,vector<int>& b,int& c ,int d,int e);

vector<vector<long long>>dp;
long long helper(vector<int>& team0,vector<int>& team1,int& teamSize,int index,int prevTeam){
    if( index == teamSize ) return 0;

    if(dp[index][prevTeam+1] != -1) return dp[index][prevTeam+1];

    long long maxHeight = helper(team0,team1,teamSize,index+1,prevTeam);

    if(prevTeam != 0){
        maxHeight = max(maxHeight , team0[index]*1LL + helper(team0,team1,teamSize,index+1,0));
    }

    if(prevTeam != 1){
        maxHeight = max(maxHeight , team1[index]*1LL + helper(team0,team1,teamSize,index+1,1));
    }

    return dp[index][prevTeam+1] = maxHeight;
}

void solve(){
   int n;cin >> n;

   vector<int>team0(n),team1(n);

   for(int &height:team0){
    cin >> height;
   }

   for(int &height:team1){
    cin >> height;
   }

   dp.assign(n,vector<long long>(3,-1));

   long long maxHeightTeamSum = helper(team0,team1,n,0,-1);
   cout << maxHeightTeamSum << endl;

   return ;
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(0);

   solve();

   return 0;
}