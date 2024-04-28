#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int a=1;
    int total=0;
    printf("Enter a positive integer:");
    scanf("%d", &count);
    if (count>0)
    {
        while(a<=count)
        {
            total=total+a;
            a++;
        }
        printf("The Sum of the range 0 - 10 is: %d",total);
    }
    else{
        printf("invalid input");
    }
    return 0;
}
