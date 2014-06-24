#include <stdio.h>

int main(){
        int number;
        scanf("%d", &number);
        for ( int index1 = 1 ; index1 <= number ; index1++ ) {
                for ( int index2 = 1 ; index2 <= index1 ; index2++) {
                        printf("%d*%d=%-4d",index2,index1,index1*index2);
                }
                printf("\n");
        }
}

