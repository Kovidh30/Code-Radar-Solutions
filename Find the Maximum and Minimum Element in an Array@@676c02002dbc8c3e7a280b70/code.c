#include<stdio.h>
#include<limits.h>

int main(){
    int n;
   
    scanf("%d", &n);
    int arr[n];
    
    // Input the array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Initialize the max and min values
    int max = INT_MIN;
    int min = INT_MAX;

    // Loop through the array to find max and min
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    // Output the minimum and maximum values
    printf("%d %d", min, max);

    return 0;
}
