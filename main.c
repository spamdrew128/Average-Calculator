#include <stdio.h>
#include <stdlib.h>

int main()
{
    // LOCAL DECLARATIONS
    double user_input;
    double running_total = 0;
    int input_count = 0;

    // EXECUTABLE STATEMENTS
    printf("Enter non negative numbers, to stop enter a negative.\n");
    do {
        scanf("%lf", &user_input);
        if(user_input < 0) {
            printf("Negative input not counted\n");
        }
        running_total += user_input;
        input_count++;
    } while(user_input >= 0);

    printf("\nYour average is %.4lf\n", ((running_total - user_input) / (input_count - 1)));
    return 0;
}
