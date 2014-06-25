#include <stdio.h>
int main(){
        int a,b;
        scanf("%d %d", &a, &b);
        int sum = 0;
        for( int index1 = 1 ; index1 <= b ; index1++) {
                int number = 0 ;
                for ( int index2 = 1; index2 <= index1; index2++) {
                         number = number*10 +a;
                }
                sum += number;
        }
        printf("%d\n", sum);
}

