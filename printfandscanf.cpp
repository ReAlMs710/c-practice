#include <iostream> 

int main() {
    char name[50];
    int age;
    char initial;
    float gradeAverage;

    printf("Enter your name: ");
    scanf("%49s", name); 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your initial: ");
    scanf(" %c", &initial); 

    printf("Enter your grade average: ");
    scanf("%f", &gradeAverage);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Grade Average: %.2f\n", gradeAverage);

    return 0;
}