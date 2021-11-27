#include<stdio.h>
int main(){
    int input;
    printf("Choose questions from _Home Care_ Category listed below\n\n\n");
    printf("1. Till what minimum oxygen saturation level value can covid patients be treated at home? \n2. Till what minimum oxygen saturation level value can covid patients be treated at home?\n\nEnter Question Number: ");
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        printf("96%% Oxygen Level");
        break;
    case 2:
        printf("95%% Oxygen Level");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}