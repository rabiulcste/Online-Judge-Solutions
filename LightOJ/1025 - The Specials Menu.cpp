#include <bits//stdc++.h>
#
using namespace std;
 
#define ll long long
#define MX 30010
#define pb push_back
 
ll dp[61][61];
 
string s;
 
ll solve(int i, int j)
{
    if(i == j) return 1;
    if(i >= j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
 
    if(s[i] == s[j]) return dp[i][j] =  1 + solve(i+1, j) + solve(i, j-1);
    else return dp[i][j] = solve(i+1, j) + solve(i, j-1) - solve(i+1, j-1);
}
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   
    int test, n, m, x;
    scanf(" %d", &test);
   
    for(int ks = 0; ks < test; ks++)
    {
        cin >> s;
        memset(dp, -1, sizeof dp);
        ll ans = solve(0, s.size()-1);
        printf("Case %d: %lld\n", ks+1, ans);
    }
    return 0;
}
