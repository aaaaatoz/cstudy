#include <stdio.h>
#include <math.h>

int main(){
        int number;
        scanf("%d", &number);
        int startindex = 1;
        int stopindex = 1;
        for ( int counter = 0 ; counter < number-1 ; counter++)
                startindex *= 10;
        stopindex = startindex*10;
        for (int index = startindex; index < stopindex ; index++){
                int temp = index;
                int sumnumber = 0;
                while (temp != 0) {
                        int bit = temp%10;
                        int intermittent = 1;
                        for ( int counter = 0 ; counter < number ; counter++ )
                                intermittent *= bit;
                        sumnumber += intermittent ;
                        temp /= 10;
                }
                if ( index == sumnumber) printf("%d\n",index);
        }
}
