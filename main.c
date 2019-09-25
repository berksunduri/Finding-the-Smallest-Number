#include <stdio.h>
int main()
{
    int i;

    int count;
    printf("How many numbers are you going to enter:");
    scanf("%d",&count);
    int mat[count];
    for(i=0;i<count;i++)
       {
          printf("mat[ %d ]:",i);
          scanf("%d",&mat[i]);
       }

    int smallest=mat[0];
    int loc=0;
    for( i=1;i<count;i++)
    {
       if(smallest>mat[i])
         {
            smallest=mat[i];
            loc=i;
         }
    }

  printf("mat[%d]=%d is the smallest number.",loc,smallest);
    return 0;
}
