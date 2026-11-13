#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        // printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // Reversing the Array
    printf("Array in reversed order:\n");
    for(i=n-1;i>=0;i--){
      printf("%d ",arr[i]);
    }
    printf("\n");
}