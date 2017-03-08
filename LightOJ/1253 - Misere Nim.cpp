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
		int n;
		scanf("%d", &n);
		int ans = 0, cnt = 0;
		for(int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			ans ^= a[i];
			if(a[i] == 1) cnt++;
		}
		if(cnt == n) {
			if(n%2) printf("Case %d: Bob\n", k);
			else printf("Case %d: Alice\n", k);
		}
		else {
			if(!ans) printf("Case %d: Bob\n", k);
			else printf("Case %d: Alice\n", k);
		}
	}
}
