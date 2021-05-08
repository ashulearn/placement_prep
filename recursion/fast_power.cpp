//compute a^n fastly 

#include<bits/stdc++.h>
using namespace std;

int fast_exp(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return fast_exp(a,n/2)*fast_exp(a,n/2);
    }
    else
    {
        return fast_exp(a,n/2)*fast_exp(a,n/2)*a;
    }
}
int main()
{
    int a=5,n=6;
    cout<<fast_exp(a,n);

    return 0;
}