#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Present ",i+1;
    else
        cout<<"not present!",i;
}
