#include <bits//stdc++.h>
using namespace std;
 
#define ll long long
#define MX 30010
#define pb push_back
vector<int> g[MX], cost[MX];
bool visited[MX];
int dist1[MX], dist2[MX], dure, maxi, n;
 
void bfs(int s)
{
    for(int i=0; i<n; i++)
        visited[i] = 0, dist1[i] = 0;
    maxi = 0;
    queue<int>Q;
    Q.push(s);
    visited[s] = 1;
    dist1[s] = 0;
 
    while(!Q.empty())
    {
        int u = Q.front();
        for(int i=0; i<g[u].size(); i++){
            int v = g[u][i];
            if(visited[v] == 0){
                dist1[v] = cost[u][i] + dist1[u];
                visited[v] = 1;
                if(dist1[v] > maxi) {
                    maxi = dist1[v];
                    dure = v;
                }
                Q.push(v);
            }
        }
        Q.pop();
    }
}
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   
    int test;
    scanf(" %d", &test);
   
    for(int ks = 0; ks < test; ks++)
    {
        scanf("%d", &n);
 
        for(int i = 0; i < n-1; i++) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            g[u].pb(v);
            g[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        bfs(0);
        //for(int i = 0; i <n; i++) cout << "0" << " " << i << " " << dist1[i] << endl;
       
        bfs(dure);
        //for(int i = 0; i <n; i++) cout << dure << " " << i << " " << dist1[i] << endl;
       
        for(int i = 0; i < n; i++) dist2[i] = dist1[i];
       
        bfs(dure);
        //for(int i = 0; i <n; i++) cout << dure << " " << i << " " << dist1[i] << endl;
       
        printf("Case %d:\n", ks+1);
        for(int i = 0; i < n; i++){
            printf("%d\n", max(dist1[i], dist2[i]));
        }
       
        for(int i = 0; i < n; i++) g[i].clear(), cost[i].clear();
    }
    return 0;
}
