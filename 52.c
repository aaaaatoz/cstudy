#include <stdio.h>

int main(){
        int number;
        scanf("%d", &number);
        if ( number < 0 ) {
                printf("fu ");
                number = -number;
        }
        /*get lenth of the number*/
        int len = 1;
        int temp = number ; /*just for len calculation */
        while(temp /= 10) {
                len++;
        }

        for(int index=(len-1); index >= 0; index--) {
                int factor = 1;
                for( int counter = 1; counter <= index ; counter++) {
                        factor *= 10;
                }
                int digit = number/factor;
                switch (digit){
                        case 0:
                                printf("ling");
                                break;
                        case 1:
                                printf("yi");
                                break;
                        case 2:
                                printf("er");
                                break;
                        case 3:
                                printf("san");
                                break;
                        case 4:
                                printf("si");
                                break;
                        case 5:
                                printf("wu");
                                break;
                        case 6:
                                printf("liu");
                                break;
                        case 7:
                                printf("qi");
                                break;
                        case 8:
                                printf("ba");
                                break;
                        case 9:
                                printf("jiu");
                                break;
                        }
                number -= digit * factor;
                if (index != 0)
                        printf("x");
        }
        printf("\n");
}

