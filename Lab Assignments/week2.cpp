#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n],ub=n-1,lb=0,flag=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key,mid;
    cin>>key;
    while(ub>=lb)
    {
        mid=lb+(ub-lb)/2;
        if(a[mid]==key)
        {
            flag=1;
            cnt++;
            break;
        }
        else if(a[mid]>key)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
    if(flag==1)
    {
        cout<<key<<" present"<<endl;
    }
}
