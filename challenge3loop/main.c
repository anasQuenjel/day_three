#include <stdio.h>
#include <stdlib.h>
// n =1+2+3+4+5+6...n
int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++ ){
        sum += i;

}
printf("%d\n", sum);
    return 0;
}
