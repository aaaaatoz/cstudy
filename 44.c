#include <stdio.h>
int main(){
        int number;
        int maxCounter;
        scanf("%d %d", &number, &maxCounter);
        int counter = 0;
        int guessNumber ;
        while( counter++ <  maxCounter )
        {
                scanf("%d", &guessNumber);
                if ( guessNumber < 0){ /*number <0 , game over*/
                        break;
                }
                if ( guessNumber > number) { /*number too big*/
                        printf("Too big\n");
                        continue;
                }
                if ( guessNumber < number) { /*number too small*/
                        printf("Too small\n");
                        continue;
                }
                if ( guessNumber == number){ /*number is exact the same */
                        if ( counter == 1) {
                                printf("Bingo!\n");
                                return 0;
                        }
                        if ( counter <= 3) {
                                printf("Lucky You!\n");
                                return 0;
                        }
                        else
                        {
                                printf("Good Guess!\n");
                                return 0;
                        }
                }
        }
        printf("Game Over\n");
}

