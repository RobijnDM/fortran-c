#include <stdio.h>

extern struct
{
   int ii, jj, kk;
} ijk_;

int doubleijk_(char *cc, int ll)
{
   cc[ll--] = '\0';  // NULL terminate the string

   printf("From doubleIJK: %s\n",cc);

   ijk_.ii *=2;
   ijk_.jj *=2;
   ijk_.kk *=2;

   return(1);
}

/* function to generate and return random numbers */
int  getrandom_(int *v1) {
   int i;
   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 5; ++i) {
      v1[i] = rand();
      printf( "r[%d] = %d\n", i, v1[i]);
   }
   return (1);
}
