#include <bits//stdc++.h>
using namespace std;
int a[101], b[101];
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    scanf("%d", &t);
 
    for(int k = 1; k <= t; k++) {
        int n, ans = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 1; i <= n; i++) {
            scanf("%d", &b[i]);
        }
 
        for(int i = 1; i <= n; i++) {
            ans ^= b[i]- a[i] - 1;
        }
 
        if(!ans) printf("Case %d: black wins\n", k);
        else printf("Case %d: white wins\n", k);
    }
    return 0;
}
