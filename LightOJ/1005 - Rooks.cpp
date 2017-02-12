#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<cassert>
#include<climits>
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
 
ll ncr[31][31], fact[31];
void solve()
{
    ncr[0][0] = 1;
    fact[0] = 1;
    FOR(i, 1, 30) {
        ncr[i][0] = 1;
        fact[i] = fact[i-1]*i;
        FOR(j, 1, 30) ncr[i][j] = ncr[i-1][j] + ncr[i-1][j-1];
    }
}
 
 
 
int main() {
 
 
    int test, kase = 0;
    scanf("%d", &test);
 
    solve();
    while(test--) {
        int n, m;
        scanf("%d %d", &n, &m);
        ll ans = ncr[n][m]*ncr[n][m]*fact[m];
        printf("Case %d: %lld\n", ++kase, ans);
    }
    return 0;
}
