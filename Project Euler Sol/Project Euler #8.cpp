#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, k, max, res, j;
    char a[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;
            cin>>a;
        max = 0, res = 0;
        for(int i=0; i<n-k; i++){
                res = a[i]-48;
            j = i+1;
            int x = k-1;
            while(x--){
                res = res * (a[j]-48);
                j++;
            }
            if(res>max)
                max = res;
        }
        cout<<max<<endl;
    }
    return 0;
}
