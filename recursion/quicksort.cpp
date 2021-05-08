#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r)
{
    int pivot = a[r];
    int i=l-1;
    int j=l;
    for(;j<=r-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;

}
void quicksort(int a[],int l,int r)
{
    if(l>=r)
    return ;
    int p = partition(a,l,r);
    quicksort(a,l,p-1);
    quicksort(a,p+1,r);

}
int main()
{
    int a[] = {6,4,9,3,8,1,2,7};
    int n=8;
    int l=0,r=n-1;
    quicksort(a,l,r);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}