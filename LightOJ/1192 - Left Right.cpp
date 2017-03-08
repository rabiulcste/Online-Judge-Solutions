#include <bits//stdc++.h>
using namespace std;
 
int a[202];
int main()
{
    int t, k = 1;
    scanf("%d", &t);
    while(t--) {
        int n, ans = 0;
        scanf("%d", &n);
        for(int i = 0; i < 2*n; i++) {
            scanf("%d", &a[i]);
            if(i&1) ans ^= (a[i]-a[i-1]-1);
        }
        if(ans) printf("Case %d: Alice\n", k++);
        else printf("Case %d: Bob\n", k++);
    }
    return 0;
}
