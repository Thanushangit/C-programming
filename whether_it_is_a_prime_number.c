#include <stdio.h>
#include <stdio.h>

main() {
  int n, i, c = 0;
  printf("Enter a positive integer:");
  scanf("%d", &n);

if (n==1)
{
    printf("The number 1 is neither prime nor composite");
}
else{
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("%d is a Prime number", n);
  }
  else
    {
          printf("%d composite number", n);
  }
}

  return 0;
}
