#include<iostream>
using namespace std;
void selection(int a[],int n)
{
    int i,j;
    int mini;
    for(i=0;i<n-1;i++)
    {
        mini=i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
                mini=j;
        }
        swap(a[mini],a[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
}
