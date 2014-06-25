#include<stdio.h>

int main(){
        int num1 , num2;
        scanf("%d/%d", &num1, &num2);
        for( int index = 2; index <= num1 || index <= num2 ; ) {
                if ( num1 % index == 0 && num2 % index ==0 ) {
                        num1 /= index;
                        num2 /= index;
                        continue;
                }
                else
                        index++;
        }
        printf("%d/%d\n", num1, num2);
}

