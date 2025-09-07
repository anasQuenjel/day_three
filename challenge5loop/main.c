#include <stdio.h>
#include <stdlib.h>
//result = pow(a,b)
int main()
{
    int num, exp,result = 1;

    printf("Enter the main number: ");
    scanf("%d", &num);

    printf("Enter the exposant number: ");
    scanf("%d", &exp);

    if (exp == 0){
        printf("The result is : %d\n", result);
    }
    for(int i = 0; i < exp; i++){
    result = result * num;
    }
printf("Your result is: %d\n", result);


return 0;

}
