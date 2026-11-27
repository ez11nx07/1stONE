#include<stdio.h>
int main(){
    // int n;
    // printf("Enter the size of the array:");
    // scanf("%d",&n);
    // int arr[n];
    // int i;
    // printf("Enter the elements of array:\n");
    // for(i=0;i<n;i++){
    //     // printf("Element %d:",i+1);
    //     scanf("%d",&arr[i]);
    // }
    int arr[] = {10,20,35,40,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Reversing the Array
    printf("Array in reversed order:\n");
    for(int i=n-1;i>=0;i--){
      printf("%d ",arr[i]);
    }
    printf("\n");
}