#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rnd_num, num;
    srand(time(0));
    rnd_num = (rand() % 20) + 1;
    
    printf("Guess the number between 1 and 20: ");
    
    while (1) 
    {
        scanf("%d", &num);
        
        if (num < rnd_num) 
        {
            printf("Too low! Try again: ");
        } 
        else if (num > rnd_num) 
        {
            printf("Too high! Try again: ");
        } 
        else 
        {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }
    }
    
    return 0;
}
