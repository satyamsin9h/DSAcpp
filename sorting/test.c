#include <stdio.h>

int max(int *arr, int n){
    int x = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > x)
            x = arr[i]; 
    }
    return x;
}

int missing_no(int *arr, int n){
    int max_val = max(arr, n);
    int miss = 0;
    for(int i = 1; i<= max_val; i++)
        miss ^= i;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            miss ^= arr[i]; 
    }

    if(miss == 0)
        return (max_val + 1);
    return miss;
}

void main(){
    int arr[] = {-3,5,1,-6};
    int p = missing_no(arr, 4);
    printf("Missing no = %d", p);
}