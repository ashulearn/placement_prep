//Program to find the nth fibonacci number

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    //base case 
    if(n==0 || n==1)
    return n;

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n=6;
    cout<<fib(n);
    return 0;
}