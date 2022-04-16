#include<iostream>
using namespace std;

int main()
{
    int sum,flag=0;
    int n;
    cin>>n;
    int i,a[n],j,k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=n/2;
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n-1;j++)
       {
            sum=a[i]+a[j];
             for(k=0;k<n;k++)
       {
           if(sum==a[k])
           {
                cout<<i<<" "<<j<<" "<<k<<endl;
               break;
           }
       }
       }


   }

}
