#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   if (argc > 0) {
      int arg = strtol(argv[1], NULL, 10);
      int y[arg];
      int sum = 0;
      printf("Size of y is: %d\n", sizeof(y));
      for (int i=0; i< arg; i++) {
         y[i] = i;
         y[i] += y[i] + 1;
         sum = sum + y[i];
      }
      int i=0;
      int j =0;
      while (1) {
	 if (i==arg) i=0;     
         printf("%d\n", y[i++]);
      }
      printf("Sum is: %d\n", sum);
      return 0;
   }
   int *x = malloc(10 * sizeof(int));
   printf("Size of x is: %d\n", sizeof(x));
   int y[10];
   printf("Size of y is: %d\n", sizeof(y));
   return 0;
}
