#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }

    num = originalNum; 

    while (num != 0) {
        int digit = num % 10; 
        sum += pow(digit, count); 
        num /= 10; 
    }

    return (sum == originalNum); 
}

int main() {
    int number;


    printf("Enter Number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}
