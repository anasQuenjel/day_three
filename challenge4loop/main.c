#include <stdio.h>
#include <stdlib.h>
//n=1,3,5,7,9...n
int main()
{
     int num;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++ ){

            printf("%d\n", 2 * i - 1);
            }
    return 0;
}
