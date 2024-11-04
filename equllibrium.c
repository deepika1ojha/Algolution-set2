#include <stdio.h>

int lSum(int *arr, int i)
{
    int sum = 0;                                                
    for(int j = i - 1; j >= 0; ){                                                 
        sum += arr[j--];                                                    
    }
    return sum;
}
int rSum(int *arr, int i, int n){
    int sum=0;
    if(i==n-1){
        sum = 0;
        return sum;
    }
    else{
        for(int j = i+1; j<n; ){
            
            sum += arr[j++];
            
        }
    }
    return sum;
}

int equillibrium_index(int *arr, int n)
{
    
    for(int i=0; i<n; i++){
        int l = lSum(arr, i);
        int r = rSum(arr, i, n);
        
        if(l==r){
            //printf("%d %d\n", l, r);
            return i+1;
        }
    }
    return -1;
}

int main()
{
    
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = equillibrium_index(arr, n);
    
    if(result != -1)
    {
        printf("Equillibrium index : %d", result);
    }
    else
    {
        printf("Equillibrium index doesn't exists");
    }
    return 0;
}
