#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int r)
{
    int mid = (l+r)/2;
    int i=l,j=mid+1;
    int temp[1000];
    int k=0;
    while(i<=mid and j<=r)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;k++;
        }
        else 
        {
            temp[k]=a[j];
            k++;j++;
        }
    }
        while(i<=mid)
        {
            temp[k]=a[i];
            k++;i++;
        }
        while(j<=r)
        {
            temp[k]=a[j];
            k++;j++;
        }
        int x=l,y=0;

        while(x<=r)
        {
            a[x]=temp[y];
            x++;y++;
        }
    

}
void mergesort(int a[],int l,int r)
{
    if(r==l)
    return ;
    int mid= (l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,r);
}
int main()
{
    int a[] = {6,4,9,2,8,3,7,12};
    int n=8;
    int l=0,r=n-1;
    mergesort(a,l,r);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}