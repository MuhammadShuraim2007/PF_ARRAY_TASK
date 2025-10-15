#include <stdio.h>

int main() {
    int product[6];
    int i;
    int arr[5];
    int n;
    
    printf("Enter the defective product code: ");
    scanf("%d" , &n);
    
    for(i=0;i<6;i++){
     printf("Enter the product code: ");
     scanf("%d" , &product[i]);
    }
    for(i=0; i<6; i++){
        if(product[i] == n){
            product[i] = 0;
             printf("The diffective product is remove: %d\n have indices %d\n",n ,i);
        }
    }
     printf("\nUpdated product codes:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", product[i]);
    }


   
    return 0;
}