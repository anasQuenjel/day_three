#include <stdio.h>
#include <stdlib.h>
//4=1x2x3x4
int main()
{
int num, sum = 1;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if( num <= 0){
        printf("Please enter a positive number:\n");
    }
    else {
    for (int i = 1; i <= num; i++ ){
        sum *= i;
  }
 printf("%d\n", sum);

    }
    return 0;
}
