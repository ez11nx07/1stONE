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
    int arr[] = {10,25,39,40,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0,odd = 0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0)
        even++;
        else
        odd++;
    }
    printf("Number of even elements: %d",even);
    printf("\nNumber of odd elements: %d",odd);
}