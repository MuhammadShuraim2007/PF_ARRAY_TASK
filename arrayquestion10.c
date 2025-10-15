#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    int chance = 0;

    while(chance < 5) {
        printf("Make your guess: ");
        scanf("%d", &n);

        int found = 0;
        for(int i = 0; i < 10; i++) {
            if(arr[i] == n) {
                printf("you guessed correct: %d\n", n);
                chance++;
                found = 1;
                break;
            }
        }

        if(!found) {
            printf("you are wrong this time\n");
        }
    }

    printf("\n You made 5 correct guesses. Game over!\n");
    return 0;
}
