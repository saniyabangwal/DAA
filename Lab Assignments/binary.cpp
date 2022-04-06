#include<iostream>
#include <array>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key,i=0,j=n;
    cin>>key;
    int mid;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            j=mid-1;
        }
        else
            i=mid+1;
    }
    if(flag)
        cout<<"Present ",mid;
    else
        cout<<"Not present";
}
