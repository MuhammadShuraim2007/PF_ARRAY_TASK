#include <stdio.h>

int main() {
    int bus[10] = {0,1,0,1,0,1,0,1,0,1};
    int n;
    int Bookings = 0;

    while(Bookings < 5) {
        printf("Enter the seat number (0 to 9): ");
        scanf("%d", &n);

        if(bus[n] == 0) {
            bus[n] = 1;  // Mark as booked
            Bookings++;
            printf("seat %d booked successfully! (%d/5)\n", n, Bookings);
        } else {
            printf("Seat %d is already booked.\n", n);
        }
    }

    printf("\nFinal seat status \n");
    for(int i = 0; i < 10; i++) {
        printf("Seat %d: %d\n", i, bus[i]);
    }

    return 0;
}
