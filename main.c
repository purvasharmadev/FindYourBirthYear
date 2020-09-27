#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 2020;
    int byear;
    char name[100];
    printf("enter your Name \n");
    scanf("%s",&name);
    printf("enter you birth year example(1999,1997,etc.) \n");
    scanf("%d",&byear);
    printf("Your name is %s \n", name);
    printf("your age is %d \n",year - byear);
    

    return 0;
}
