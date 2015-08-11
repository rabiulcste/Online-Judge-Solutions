#include <cstdio>
#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    ll t, n, i, j;
    cin>>t;
    while(t--){
        cin>>n;
        i =1;
            for(j=1; j<=n; ++j){
                i *= j/gcd(j, i);
        }
        cout<<i<<endl;
    }
    return 0;
}
