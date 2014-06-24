#include <stdio.h>

int main(){
        int number=0;
        scanf("%d",&number);
        int counter =  0;
        for (int num1=number; num1<=(number+3); num1++) {
                for (int num2=number; num2 <=number+3; num2++) {
                        if ( num2 == num1) continue;
                        for ( int num3 = number ; num3 <= number+3 ; num3++ ){
                                if ( num3 == num1 || num3 == num2) continue;
                                if ( ++counter % 6 != 0)
                                        printf("%d ", 100*num1 + 10*num2 + num3);
                                else
                                        printf("%d\n", 100*num1 + 10*num2 + num3);
                        }
                }
        }
}
