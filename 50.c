nclude <stdio.h>

int main(){
        int number;
        scanf("%d", &number);
        double num1=2.0;
        double num2=1.0;
        double temp = 0.0;
        double sum = 0.0;

        for( int index=1; index <= number ; index++) {
                sum += num1/num2 ;
                temp = num1 ;
                num1 = num1 + num2;
                num2 = temp;
        }
        printf("%.2f\n",sum);
}

