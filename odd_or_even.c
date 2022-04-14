
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if(n % 2 == 0 ){
        printf("It's an even number!");
    }else{
        printf("It's an odd number!");
    }

    return 0;
}
