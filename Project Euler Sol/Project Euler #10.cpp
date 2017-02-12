#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
const int MAXN = 1e6 + 10;
char prime[MAXN];
long long sum[MAXN];
void countprime()
{
    int x = sqrt(MAXN);
    prime[0] = prime[1] = 1;
    for(int i = 4; i <= MAXN; i += 2){
        prime[i] = 1;
    }
    for(int i = 3; i <= x; i += 2){
        if(prime[i] == 0){
            for(int j = i+i; j <= MAXN; j += i){
                prime[j] = 1;
            }
        }
    }
    long long res = 0;
    for(int i = 2; i <= MAXN; i++){
        if(prime[i]==0){
            res += i;
        }
        sum[i] = res;
    }
    return;
}
int main()
{
    long long t, n;
    countprime();
    cin>>t;

    while(t--){
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
