#include <stdio.h>
int getIntCount(int arr[],int n)
{
   int inv_count=0;
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
              inv_count++;
       }
   }
    return inv_count;
}
int main()
{
  int arr[]={7,2,6,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",getIntCount(arr,n));
    return 0;
}
