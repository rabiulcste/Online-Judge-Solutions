#include<bits//stdc++.h>
using namespace std;
 
#define REP(i,n) for(int i=0, _e(n); i<_e; i++)
#define FOR(i,a,b) for(int i(a), _e(b); i<=_e; i++)
#define FORD(i,a,b) for(int i(a), _e(b); i>=_e; i--)
#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define SET(t,v) memset((t), (v), sizeof(t))
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize( unique( ALL(c) ) - (c).begin() )
 
#define sz size()
#define pb push_back
#define VI vector<int>
#define VS vector<string>
 
typedef long long ll;
typedef pair<int,int> pii;
 
#define D(x) if(1) cout << __LINE__ <<" "<< #x " = " << (x) << endl;
#define D2(x,y) if(1) cout << __LINE__ <<" "<< #x " = " << (x) \
    <<", " << #y " = " << (y) << endl;
 
int a[20][3], dp[3];
int main() {
 
 
    int test, kase = 0;
    scanf("%d", &test);
    while(test--) {
        int n;
        scanf("%d", &n);
 
        for(int i = 0; i < n; i++)
            for(int j = 0; j < 3; j++)
                scanf("%d", &a[i][j]);
 
        for(int j = 1; j < n; j++) {
            a[j][0] += min(a[j-1][1], a[j-1][2]);
            a[j][1] += min(a[j-1][0], a[j-1][2]);
            a[j][2] += min(a[j-1][0], a[j-1][1]);
        }
        int ans = min(a[n-1][0], min(a[n-1][1], a[n-1][2]));
        printf("Case %d: %d\n", ++kase, ans);
    }
    return 0;
}
