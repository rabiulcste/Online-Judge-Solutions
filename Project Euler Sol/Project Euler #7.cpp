#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
#define MAX 200000
using namespace std;
char prime[MAX]={0};

void sieve()
{
    int i, j, x;
    prime[0] = prime[1] = 1;
    for(i = 4; i < MAX; i += 2)
        prime[i] = 1;
     x = sqrt(MAX);

    for(i = 3; i <= x; i += 2){
        if(prime[i] == 0){
            for(j = i + i; j <= MAX; j += i)
                prime[j] = 1;
        }
    }
    return;
}

int output(int n)
{
    int ans, i, j, count = 0;
    for(i=2; i<200000; i++){
        if(prime[i]==0){
            ans = i;
            count++;
        }
        if(count == n){
                break;
            }
    }
    return ans;
}
int main()
{
    int t, n;
    sieve();
    cin>>t;
    while(t--) {
            cin>>n;
    cout<<output(n)<<endl;
    }
    return 0;
}
