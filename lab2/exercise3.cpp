//
// Created by AndyB1ance on 2020/3/1.
//
// lab2 exercise 3: enter int,char,float,then use printf to print
//
#include <cstdio>

int main(){
    printf("Please Enter a Character :  ");
    char input_char;
    scanf("%c",&input_char);

    printf("Please Enter an Integer Value:  ");
    int input_int;
    scanf("%d",&input_int);

    printf("Please Enter Float Value:  ");
    float input_float;
    scanf("%f",&input_float);

    printf("\nThe variables you entered were:\n");
    printf("The Character Value that you Entered is :  %c\n",input_char);
    printf("The Integer Value that you Entered is :  %d\n",input_int);
    printf("The Float Value that you Entered is :  %g\n",input_float);

    return 0;
}



