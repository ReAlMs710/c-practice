#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double roundToTwoDecimalPlaces(double value) {
    return round(value * 100) / 100;
}

int main() {
    double number;
    printf("Enter a number to round: ");
    scanf("%lf", &number);

    double rounded = roundToTwoDecimalPlaces(number);
    printf("Rounded number: %.2f\n", rounded);

    srand(time(0)); 
    int randomNumber = (rand() % 10) + 1;
    printf("Random number between 1 and 10: %d\n", randomNumber);

    return 0;
}
