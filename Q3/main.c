#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define type_name(expr) \ 
    (_Generic((expr), \ 
              char: "char", unsigned char: "unsigned char", signed char: "signed char", \ 
              short: "short", unsigned short: "unsigned short", \ 
              int: "int", unsigned int: "unsigned int", \ 
              long: "long", unsigned long: "unsigned long", \ 
              long long: "long long", unsigned long long: "unsigned long long", \ 
              float: "float", \ 
              double: "double", \ 
              long double: "long double", \ 
              void*: "void*", \ 
              default: "?")) 
int printMenu();
void printFlights();


struct flight{
    char from[10];
    char to[10];
    int day;
    int month;
    int year;
};
int main(){
    
    struct flight flights[5];
    int counter=0;

    char from[20];
    int menu = printMenu();
    //printf("Menu: %d",menu);
    while (menu != -1)
    {
        switch (menu)
        {
        case 0:
          /*for(int i=0;i<counter;i++){
                    printf("%d. flight %s--%s\n",i,flights[i].from,flights[i].to);
                }*/
            printFlights(counter,flights);    
            if(counter <= 4){
            printf("enter from city:");
            scanf("%s", flights[counter].from);
            printf("enter to city:");
            scanf("%s", flights[counter].to);
            printf("enter to day:");
            scanf("%d",&flights[counter].day);
            while(!(0 < flights[counter].day && flights[counter].day <32)){
                printf("please enter to day between 1 and 31:");
                scanf("%d",&flights[counter].day);
            }
            printf("enter to month:");
            scanf("%d",&flights[counter].month);
            while(!(0 < flights[counter].month && flights[counter].month <13)){
                printf("please enter to month between 1 and 12:");
                scanf("%d",&flights[counter].month);
            }
            printf("enter to year:");
            scanf("%d",&flights[counter].year);
           
            while(!(2020 < flights[counter].year)){
                printf("please enter to year stars from 2021:");
                scanf("%d",&flights[counter].year);
            }
            counter++;
            
            }
            else{
                printf("our array is full");

            }
            break;
        case 1:
            if(counter>0){
                printFlights(counter,flights);    
                printf("Press enter -1 to cancel operation.\n");
                printf("Enter the number which you want erase it:");
                int index;
                scanf("%d", &index);
                if (index==-1)
                {
                    break;
                }else{
                    while(index>=counter || index<0){
                    printf("enter the number which you want erase it:");
                    scanf("%d",&index);
                }

                if (index==4){
                    flights[index].from[0] = "\0";
                    flights[index].to[0] = "\0";
                    flights[index].day = 0;
                    flights[index].month = 0;
                    flights[index].year = 0;
                }else{

                for(int i=index;i<4;i++){ 
                    strcpy(flights[i].from, flights[i+1].from);
                    strcpy(flights[i].to, flights[i+1].to);
                    flights[i].day=flights[i+1].day;
                    flights[i].month=flights[i+1].month;
                    flights[i].year=flights[i+1].year;
                    /*flights[i].from = flights[i+1].from;                  
                    flights[i].to = flights[i+1].to;*/
                    
                }
                flights[4].from[0] = "\0";
                flights[4].to[0] = "\0";
                flights[4].day = 0;
                flights[4].month = 0;
                flights[4].year = 0;

                
                }}   
                counter--;       
            }
            else{
                printf("Error! There is no flight!\n");
            }
            break;
        case 2:
            if(counter>0){
                printFlights(counter,flights);    
                printf("Press enter -1 to cancel operation.\n");
                printf("Enter the number which you want Edit it:");
                int index;
                scanf("%d", &index);
                printf("%s from change with:",flights[index].from);
                
                scanf("%s",&flights[index].from);
                printf("%s to change with:",flights[index].to);
                scanf("%s",&flights[index].to);
                printf("day %d to change with:",flights[index].day);
                scanf("%d",&flights[index].day);
                printf("month %d to change with:",flights[index].month);
                scanf("%d",&flights[index].month);
                printf("year %d to change with:",flights[index].year);
                scanf("%d",&flights[index].year);


                
                }
            break;
        case 3:
            printFlights(counter,flights);
            printf("\n\n");

            break;

        default:
            printf("Error! Please enter an integer between (0,2)!");
        }
        menu = printMenu();
    }

    return 0;
}
int printMenu(){
    int menu;
    printf("press -1 to exit\n0. Create flight\n1. Delete flight\n2. Edit flight\n3.Print menu\n");        
    scanf("%d",&menu);
    
    return menu;   
}

void printFlights(int counter, struct flight *flights)
{
    for (int i = 0; i < counter; i++)
    {
        printf("%d. flight %s-->%s\n%d/%d/%d\n", i, flights[i].from, flights[i].to,flights[i].day,flights[i].month,flights[i].year);
    }
}


