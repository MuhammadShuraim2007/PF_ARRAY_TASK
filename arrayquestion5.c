    #include <stdio.h>
    
    int main() {
        int arr[5] , n=5;
        int i ,j;
        int target;
        
        for(i=0; i<5; i++){
            printf("Enter the prices of product: ");
            scanf("%d" , &arr[i]);
        }    
            printf("Enter the target: ");
            scanf("%d" , &target);
        
            for(i=0;i<5;i++){
                for(j=i+1;j<n;j++){
                    if(arr[i]+arr[j]==target){
                      printf("Pair found: %d + %d = %d\n indices (%d , %d)", 
                       arr[i], arr[j], target , i , j);
                    }
                }            
            }
        return 0;
    }
