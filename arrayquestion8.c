#include <stdio.h>

int main() {
    int i, n, k;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter the ID %d of employee: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    
    k = k % n;
    
    int rotated[n];
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    printf("\nNew shift order after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    
    return 0;
}
