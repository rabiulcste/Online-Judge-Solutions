#include <bits//stdc++.h>
using namespace std;
 
int dp[101][101];
string s;
int solve(int i, int j){
    if(i >= j) return 0;
    int ret = 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == s[j])
        dp[i][j] = solve(i+1, j-1);
    else
        dp[i][j] = 1 + min(solve(i+1, j), solve(i, j-1));
    return dp[i][j];
}
 
int main()
{
    int t, k = 1;
    scanf("%d", &t);
    while(t--) {
        cin >> s;
        memset(dp, -1, sizeof dp);
        int ans = solve(0, s.size()-1);
        printf("Case %d: %d\n", k++, ans);
    }
    return 0;
}
