#include <bits//stdc++.h>
using namespace std;
int a[101];
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d", &t);
 
    for(int k = 1; k <= t; k++) {
        int n, m, ans = 0;
        scanf("%d %d", &n, &m);
        for(int i = 1; i <= n; i++) {
            int val = 0;
            for(int j = 1; j <= m; j++){
                int x;
                scanf("%d", &x);
                val += x;
            }
            ans ^= val;
        }
   
        if(!ans) printf("Case %d: Bob\n", k);
        else printf("Case %d: Alice\n", k);
    }
    return 0;
}
