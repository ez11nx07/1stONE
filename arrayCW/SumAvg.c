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
    int sum = 0;
    int avg = 0;
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("Sum = %d",sum);
    printf("\nAverage = %d",avg);
}