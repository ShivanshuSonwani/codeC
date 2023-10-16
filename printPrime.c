#include<stdio.h>

void main() {
    int num;
    printf("Print prime numbers upto: ");
    scanf("%d",&num);

    // this function prints prime numbers

    int prime(int x) {
        for(int i=1 ; i<=x ; i++) {
            int count = 0;
            for(int j=1 ; j<=i ; j++) {
                if(i%j == 0){
                    count++;
                }
            }
            if(count == 2) {
                printf("%d\n",i);
            }
        }
    }

    prime(num);

}