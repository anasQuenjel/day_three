#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
    printf("Enter your number: ");
        scanf("%d", &num);

         if (num == 0){
                printf("The division operation can not be on Zero \n");
                return 0;
            }
            else {
                for (int i = 1; i <= 10; i++){

                printf("%d x %d = %d\n", num, i, num * i);

            }
    }
    return 0;
}
