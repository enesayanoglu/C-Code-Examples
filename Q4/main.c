#include<stdint.h>
#include<stdio.h>

int main(){
    int a;
    int b;
    int divisibleintegers;
    printf("Enter first value:");
    scanf("%d",&a);
    printf("Enter second value:");
    scanf("%d",&b);
    if(a>b){
        divisibleintegers = (((a-b)/3)+1); 
    }else{
        divisibleintegers = (((b-a)/3)+1); 
    }
    
    printf("Numbers divisible by 3:%d",divisibleintegers);
    return 0;
}