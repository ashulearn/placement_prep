#include<bits/stdc++.h>
using namespace std;

//bubble_sort func
void bubble_sort_rec(int a[],int n)
{
    //base 
    if(n==0)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }

    }
    bubble_sort_rec(a,n-1);
}

//main function
int main()
{
    int a[] = {4,6,2,1,9};
    int n=5;
    bubble_sort_rec(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}