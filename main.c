#include <stdio.h>

int findSum(int num1, int num2) {
    return num1 + num2;
}

void printSummation(int a,int b,int c) {
    printf("%d + %d = %d", a, b, c);
}

int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = findSum(number1, number2);     
    
    printSummation(number1,number2,sum);

    return 0;
}