#include<iostream>
#include<cmath>

using namespace std;
int jumpSearch(int array[], int size, int key) {
   int start = 0;
   int end = sqrt(size);

   while(array[end] <= key && end < size) {
      start = end;
      end += sqrt(size);
      if(end > size - 1)
         end = size;

   for(int i = start; i<end; i++) {
      if(array[i] == key)
         return i;
   }

}
return -1;
}

int main() {
   int n,Key, loc;
   cin >> n;
   int arr[n];
   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }
   cin >>Key;
   if((loc = jumpSearch(arr,n,Key))>= 0)
      cout << "Present" <<loc<<endl;
   else
      cout << "Not present"<<endl;
}
