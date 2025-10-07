#include <stdio.h>
#include <math.h>

int main()
{
   int x, y, z;
   float l;
   scanf("%f",&l);
   x=floor(l);
   y=ceil(l);
   z=round(l);
   printf("%d\n %d\n %d\n", x,y,z);

    return 0;
}
