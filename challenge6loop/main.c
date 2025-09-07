#include <stdio.h>
#include <stdlib.h>
//n = n even number
int main(){

int num, even = 2;
printf("Enter a number: ");
scanf("%d", &num);

for (int i = 1; i <= num; i++){
    printf("%d\n",even);
    even += 2;
}

    return 0;
}
