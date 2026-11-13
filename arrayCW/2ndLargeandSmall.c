#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    int i;
    printf("Enter the elements of array:\n");
    for(i=0;i<5;i++){
        // printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }
    int secondmax = INT_MIN;
    int secondmin = INT_MAX;
     for(i=0;i<5;i++){
        if(arr[i] > secondmax && arr[i] < max)
        secondmax = arr[i];
        if(arr[i] < secondmin && arr[i] > min)
        secondmin = arr[i];
    }
    printf("The second largest element in the array is : %d",secondmax);
    printf("\nThe second smallest element in the array is : %d",secondmin);
}
