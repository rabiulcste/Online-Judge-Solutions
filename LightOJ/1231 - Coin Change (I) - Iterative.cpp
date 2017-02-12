#include <bits//stdc++.h>
using namespace std;

const int MOD = 1e8+7;

int N,  K, coin[101], c[101], dp[101][1001];


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d", &t);

    for(int k = 1; k <= t; k++){
        memset(dp, 0, sizeof(dp));
        scanf("%d %d", &N, &K);
        for(int i = 1; i <= N; i++) scanf("%d", &coin[i]);
        for(int i = 1; i <= N; i++) scanf("%d", &c[i]);
        
        dp[0][0] = 1;
        for(int i = 1; i <= N; i++) 
        {
            for(int j = 0; j <= K; j++) {
                for(int l = 0; l <= c[i] && j+coin[i]*l <= K; l++) {
                    dp[i][j+coin[i]*l] += dp[i-1][j];
                    dp[i][j+coin[i]*l] %= MOD; 
                }
            }
        }
        
        printf("Case %d: %d\n", k, dp[N][K]);
    }
    return 0;
}
