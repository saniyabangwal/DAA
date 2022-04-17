#include<iostream>
using namespace std;

void insertion(int a[],int n)
{
  int i,j,temp;
  for(i=1;i<n-1;i++)
  {
      temp=a[i];
      j=i-1;
      while(j>=0&&temp<a[j])
      {
          a[j+1]=a[j];
          j--;
      }
      a[j+1]=temp;
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
        cin>>a[i];
    insertion(a,n);
    return 0;
}
