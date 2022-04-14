
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    printf("%d %d ", a, b);     // print 0 1
    for (int i = 2; i < n; i++) //loop starts from 2 because 0 and 1 are already printed
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
