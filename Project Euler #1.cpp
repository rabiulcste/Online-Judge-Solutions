#include <iostream>

using namespace std;

long long sum(long long n){
    return (n*(n+1))/2;
}

int main()
{
    long long test, n, res;
    cin>>test;
    while(test--){
        cin>>n;
        n--;
        res = 3*sum(n/3) + 5*sum(n/5) - 15*sum(n/15);
        cout<<res<<endl;
    }
    return 0;
}
