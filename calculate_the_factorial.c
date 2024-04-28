#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int a=1;
    int total=1;
    printf("Enter a positive integer:");
    scanf("%d", &count);
    if (count>0)
    {
        while(a<=count)
        {
            total=total*a;
            a++;
        }
        printf("The factorial of %d is: %d",  count, total);
    }
    else if(count==0)
        {
        printf("the factorial of zero is 1");

    }
else{
        printf("Factorial of a negative number does not exist");
}

    return 0;
}
