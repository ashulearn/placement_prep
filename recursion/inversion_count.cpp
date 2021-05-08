#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int l,int r)
{
    int mid = (l+r)/2;
    int i=l,j=mid+1;
    int temp[1000];
    int k=0;
    int ans=0;
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
            ans += (mid-i+1);
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
    
    return ans;
}
int mergesort(int a[],int l,int r)
{
    if(r==l)
    return 0;
    int mid= (l+r)/2;
    int x=mergesort(a,l,mid);
    int y=mergesort(a,mid+1,r);
    int z=merge(a,l,r);
    return x+y+z;
}
int main()
{
    int a[] = {1,5,2,6,3,0};
    int n=6;
    int l=0,r=n-1;
    cout<<mergesort(a,l,r)<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}