QUESTION : Half Pyramid of Alphabets

input = F
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 


CODE :

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);//it takes the alphabet to which the length of pyramid goes.
   for (i = 1; i <= (input - 'A' + 1); ++i)//here we are iterating through rows. 
   {
      for (j = 1; j <= i; ++j)//here we are iterating through columns. 
      {
         printf("%c ", alphabet);
      }
      ++alphabet;//increasing to get next alphabet for next iteration.
      printf("\n");//to start from next line.
   }
   return 0;
}
