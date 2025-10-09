#include <stdio.h>

int main(){
    int num1,num2;

    printf("Enter 2 numbers");

    scanf("%d %d", &num1, &num2);

    printf("Sum of 2 numbers is %d", num1+num2);
    if(num1>num2){
        printf("Difference of 2 numbers is %d", num1-num2);
    }
    else{
        printf("Difference of 2 numbers is %d", num2-num1);
    }
    printf("Product of 2 numbers is %d", (num1*num2));
}