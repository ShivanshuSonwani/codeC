#include<stdio.h>

void main() {
    int num,i=1,count=0;
    printf("Enter any number to check if it is Prime number or not: ");
    scanf("%d",&num);

    // Using for loop
    // for(i; i<=num ; i++) {
    //     if(num%i == 0){
    //         count++;
    //     }
    // }

    // Using while loop
    while(i<=num) {
        if(num%i == 0) {
            count++;
        }
        i++;
    }
    if(count == 2) {
        printf("%d is a Prime number",num);
     } else {
        printf("%d is not a Prime number",num);
    }
}