// Given Length and Sum of Digits...
// the approach is that we need to find two numbers largest and smallest possible that are of m length and the sum of there digit is s
// for the largest number it is easy we can use a while loop over lenght and start with the rightmost digit and try to maximize it
// either we use 9 or if the sum doesnt allow it then a digit less than 9 as well, and also reduce the digit used from the sum
// using this the length and sum conditions are easily met
// for the smallest number the main constraint is that we cannot use leading zeros so we have to start the number with at least 1 
// and also we need to keep in mind that we need to minimize the starting (right to left) digits to make smallest possible number
// only when the sum is not zero and we are at the first digit to be set and the best would have been 0 but we have to use 1 instead
// in other positions the logic is that we try to make the current pos 0 if other positions left => size-1 , if fiited with all 9's (max)
// can easily handle the sum we need to make , else we might need to chip in the sum and make the currdigit other than 0 
// but just to the point that other positions left can handle the sum after the chip in for this we use max(sum - (size-1)*9,0)
// where (size-1)*9 tell how much other positions can help at max if the help is sufficient enough making the sum <= 0
// meaning it is safe to use 0 here , else the sum - (size-1)*9 will tell how much the curr position need to contribute
// one more important thing is that length can reach 100 so use strings rather than long long int since there no calcultions with results 
// and also if the pair is not possible then we have to return -1 -1 which can only be possible when the sum is more than each single digit can handle
// that is sum/size > 9 , since the division can be 9.1 , and when sum is 0 and length needed is more than 1 then the smallest number will be leading zeros

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m,s;
    cin >> m >> s;
    int size = m, sum = s, digit;
    if( (float(sum)/size > 9.0 ) || (sum == 0 && size > 1) ) {
        cout << -1 << " " << -1 << endl;
        return ;
    }
    string largest;
    while(size > 0){
        digit = min(sum,9);
        largest+= ('0'+digit);
        sum -= digit;
        size--;
    }
    
    string smallest;
    size = m;
    sum = s;
    
    while(size > 0){
        digit = max(sum - ((size-1)*9), 0);
        if(size == m && digit == 0 && sum != 0) digit = 1;
        smallest+= ('0'+digit);
        sum -= digit;
        size--;
    }
    cout << smallest << " " << largest << endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}