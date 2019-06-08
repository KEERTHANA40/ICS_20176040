#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
   printf("INT_Minimum value = %d\n", INT_MIN);
   printf("INT_Maximum value = %d\n", INT_MAX);

   printf("CHAR_Minimum value = %d\n", CHAR_MIN);
   printf("CHAR_Maximum value = %d\n", CHAR_MAX);

   printf("LONG_Minimum value = %ld\n", LONG_MIN);
   printf("LONG_Maximum value = %ld\n", LONG_MAX);

   printf("FLOAT_Minimum value = %.10e\n", FLT_MIN);
   printf("FLOAT_Maximum value = %.10e\n", FLT_MAX);

   printf("DOUBLE_Minimum value = %.10e\n", DBL_MIN);
   printf("DOUBLE_Maximum value = %.10e\n", DBL_MAX);

    return 0;
}
