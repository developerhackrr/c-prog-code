#include<stdio.h>
int main()
{
  // variable
  char str[20];

  // take input
  printf("Enter a string: ");
  scanf("%[^\n]",str);

  // print pattern
  // outer loop for row
  for(int i=0; str[i]!='\0'; i++)
  {
    // inner loop for column
    for(int j=0; j<=i; j++)
    {
      // display
      printf("%c", str[j]); 
    }

    printf("\n"); // new line
  }

  return 0;
}
