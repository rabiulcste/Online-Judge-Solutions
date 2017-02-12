#include <bits//stdc++.h>
using namespace std;

const int MOD = 1e8+7;

int N, coin[101], K, c[101], dp[101][1001];

int call(int i, int amount)
{
    if(i >= N) { // All coins have been taken
        if(amount == K) return 1;
        return 0;
    }

    if(dp[i][amount] != -1) return dp[i][amount];
    int ret1 = 0, ret2 = 0;

    for(int j = 1; j <= c[i] && amount+coin[i]*j <= K; j++) {
        ret1 += call(i+1, amount + coin[i]*j); // try to take coin i
        ret1 %= MOD;
    }
    ret2 += call(i+1, amount); // don't take coin
    ret2 %= MOD;
    return dp[i][amount] = (ret1 + ret2)%MOD; // total possible way
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d", &t);

    for(int k = 1; k <= t; k++){
        memset(dp, -1, sizeof(dp));
        scanf("%d %d", &N, &K);
        for(int i = 0; i < N; i++) scanf("%d", &coin[i]);
        for(int i = 0; i < N; i++) scanf("%d", &c[i]);
        int ans = call(0, 0);
        printf("Case %d: %d\n", k, ans);
    }
    return 0;
}
