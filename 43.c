#include <stdio.h>
int isPrime(int number){
        if (number == 1)
                return 0;
        if (number == 2)
                return 1;
        for (int index = 2; index*index <= number; index++)
        {
                if ( number%index==0 )
                        return 0;
        }
        return 1;
}

int main(){
        int start =1; /*start indexing number */
        int end = 500; /*end indexing number*/
        int counter = 0; /* set counter initial number = 0 */
        int sum = 0 ; /*set summary initial number = 0 */
        scanf("%d %d",&start, &end); /* read the start and end number from stdin*/
        /* count the number of prime and summary in the for loop */
        for (int index = start ; index <= end ; index++){
                if ( isPrime(index)) {
                        counter++ ;
                        sum += index;
                }
        }
        printf("%d %d\n", counter, sum);
}

