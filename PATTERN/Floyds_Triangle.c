QUESTION : Floyd's Triangle pattern Problem.

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


CODE : 

#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);//taking input to get the total rows that should be printed.
   for (i = 1; i <= rows; i++)  // this for loop define the rows and check rows condition
   {
      for (j = 1; j <= i; ++j)// this for loop check j should be less than equal to i and print the data. 
      {
         printf("%d ", number);// print the number  
         ++number;
      }
      printf("\n");//to start from next line
   }
   return 0;
}
