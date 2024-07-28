#include <stdio.h>

int actions; // actions: sum, minus, divede, multiply
float a; // number 1
float b; // number 2
float result;  // result 

int main() {
    while (1) {
        printf("\n Enter actions 1: + 2: - 3: / 4: *: ");
        scanf("%d", &actions);

        printf("Enter number 1: ");
        scanf("%f", &a);

        printf("Enter number 2: ");
        scanf("%f", &b);

        switch (actions) {
            case 1:
                result = a + b;
                printf("%f", result);
                break;

            case 2: 
                result = a - b;
                printf("%f", result);
                break;

            case 3:
                result = a / b;
                printf("%f", result);  
                break;

            case 4:
                result = a * b;
                printf("%f", result);
                break;
            
            default:
                printf("error operations ");
        };
    };

    return 0;
}