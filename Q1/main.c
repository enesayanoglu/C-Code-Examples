#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdint.h>

int main(){
    int odd;
    char y='*';
    char a='+';

    printf("enter an odd number:");
    scanf("%d",&odd);
    if(odd%2 == 1){
        for(int i=0;i<((odd + 1)/2);i++){
        
        for (int j = 0; j < i; j++)
        {
            printf("%c",y);
        }
        
        for(int c=0;c<odd-i*2;c++)
        { 
            printf("%c",a);
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c",y);
        }    
        printf("\n");
        }
    }
    else if(odd%2 == 0){
        printf("enter an odd number:");
        scanf("%d",&odd);
    }



    return 0;
}