#include<stdio.h>

int main(){
    int speed;
    int r1;
    int r2;
    int l1ti;
    int l2ti;
    int simt;
    printf("Enter car speed:");
    scanf("%d",&speed);
    printf("Enter 1. road distance:");
    scanf("%d",&r1);
    printf("Enter 1. light time interval:");
    scanf("%d",&l1ti);
    printf("Enter 2. road distance:");
    scanf("%d",&r2);
    printf("Enter 2. light time interval:");
    scanf("%d",&l2ti);
    simt = (r1/speed);
    if((simt/l1ti)%2 == 1){
        simt = (l1ti - (simt%l1ti)) + simt;
    }
    simt = simt + (r2/speed);
    if((simt/l2ti)%2 == 1){
        simt = (l2ti - (simt%l2ti)) + simt;
    }
    printf("%d",simt);

    
    



    return 0;
}