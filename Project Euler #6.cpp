#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long t, n, res;
    cin>>t;
    while(t--) {
        cin>>n;
        res = (3*n*n*n*n+2*n*n*n-3*n*n-2*n)/12;
        cout<<res<<endl;
    }
    return 0;
}

