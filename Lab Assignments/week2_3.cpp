#include<iostream>
using namespace std;

int main(){
int n,key;
cin>>n;
int a[n],i,j;

for(i=0;i<n;i++)
    cin>>a[i];

cin>>key;
int diff,cnt=0;

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        diff=a[i]-a[j];
        if(diff<0)
        {
            diff=-1*diff;
        }
        if(diff==key)
        {
            ++cnt;

        }
    }
}
cout<<cnt<<endl;
}
