#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int terms, method; //terms for leibniz, method for switch to decide the method of calc
double pi = 0.0; // final pi number, global because you are using one or the other method
double termAdder; // this is for leibniz and incrementing the infinite equation
long points, insideCircle; // num of random points for the monte carlo and increment insideCircle
double x, y; // for the monte carlo


int Leibniz() {
    printf("How many terms to calc pi: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++) {
        termAdder = pow(-1, i) / (2 * i + 1);
        pi += termAdder; 
    }

    pi *= 4;
    printf("%.15f", pi);

    return 0;
}

int monteCarlo() {
    printf("How many points (do 1 million MINIMUM)");
    scanf("%ld", &points);
    
    if (points < 1000000) {
        printf("WARNING!!! You are running with under a million points. Be advised that the final answer may be incredibly incorrect.");
    }

    srand(time(NULL));

    for (long i = 0; i < points; i++) {
        x = (double)rand() / RAND_MAX * 2.0 - 1.0;
        y = (double)rand() / RAND_MAX * 2.0 - 1.0;

        if (x * x + y * y <= 1) {
            insideCircle++;
        }
    }

    pi = 4.0 * insideCircle / points;
    printf("%.15f", pi);
    return 0;
}


int main() {
    printf("What method do you want to use to calculate pi?\n1. Leibniz\n2. Monte Carlo\n");
    scanf("%d", &method);

    switch (method) {
        case 1:
            Leibniz();
            break;
        case 2:
            monteCarlo();
            break;
        default:
            printf("incorrect choice! im ending it all!");
            return 0;
    }
}
