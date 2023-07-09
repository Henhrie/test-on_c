#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess, attempts = 0;

    printf("Welcome to my Guessing Game!!!\n");

    while (1)
    {
        printf("Enter your guess (1-100):");
        scanf("%d", &guess);
        attempts++;

        if (guess == target)
        {
            printf("Congratulations! You guessed the number in %d attempts. \n", attempts);
            break;
            }
            else if (guess < target)
            {
                printf("Higher!\n");
            }
            else {
                printf("Lower!\n");
            }
    }
    return 0;
}