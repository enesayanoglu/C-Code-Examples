#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

int main()
{
    int dice[100];
    int min=0;
    printf("enter min value");
    scanf("%d", &min);
    while(1){
    for(int i=0;i<100;i++)
    {
    dice[i] = (rand() % 6 + 1);
    printf("%d",dice[i]);
    if (dice[i] <= min && dice[i - 1] <= min && dice[i - 2] <= min && dice[i - 3] <= min && i>4)
            {
                printf("finshed after %d roll", i+1);
                return 0;
            }
    }
    }
   
    

    return 0;
}

