#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if( (i!=6) && (i!=9) )
      {
         printf("%d ",i);
      }
  }
  return 0;
}
