#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("Time = %d hours %d minutes %d seconds\n",
           hours, minutes, remainingSeconds);

    return 0;
}
