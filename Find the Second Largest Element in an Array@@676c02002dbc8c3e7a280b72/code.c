#include<stdio.h>
#include<limits.h>

int main(){
    int n;
   
    scanf("%d", &n);
        else if(n < 2){
        printf("-1\n");
        return 0;
    }
    int arr[n];

    
    
    // Input the array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Initialize the max and min values
    int max = INT_MIN;
 

    // Loop through the array to find max and min
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i]-1;
        }
    
        
    }

    // Output the minimum and maximum values
    printf("%d" , max);

    return 0;
}