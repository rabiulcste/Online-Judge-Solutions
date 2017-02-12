#include <iostream>

using namespace std;

int main()
{
    long long first, second, next, test, n, sum;
    cin>>test;
    while(test--){
        cin>>n;
        sum = 0;
        first = 1;
        second = 2;
        while(second<=n){
            next = first + second;
            if(second%2==0)
                sum += second;
            first = second;
            second = next;
        }
        cout<<sum<<endl;
    }
    return 0;
}
