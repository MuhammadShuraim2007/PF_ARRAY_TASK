	#include <stdio.h>

int main() {
    int productid[10];
    int i, j;
    int mostSoldId;
    int maxCount = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Enter the product ID: ");
        scanf("%d", &productid[i]);
    }

    
    for(i = 0; i < 10; i++) {
        int count = 0;
        for(j = 0; j < 10; j++) {
            if(productid[i] == productid[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mostSoldId = productid[i];
        }
    }

    printf("\nThe most sold product ID is: %d\n", mostSoldId);

    return 0;
}
