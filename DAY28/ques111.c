#include <stdio.h>

int main() {
    int seats = 50;
    int book;

    printf("Available Seats = %d\n", seats);

    printf("Enter Number of Seats to Book: ");
    scanf("%d", &book);

    if (book <= seats) {
        seats -= book;
        printf("Booking Successful!\n");
        printf("Remaining Seats = %d\n", seats);
    } else {
        printf("Booking Failed! Not enough seats.\n");
    }

    return 0;
}