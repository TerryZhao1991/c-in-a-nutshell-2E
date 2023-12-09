// Example 2-1. 
// limits.c: Display the value ranges of char and int.
// ---------------------------------------------------
#include <stdio.h>
#include <limits.h>     // Contains the macros CHAR_MIN, INT_MIN, etc.
/*include the minimum and maximum values that 
  different types (like char, int, short, long, unsigned variants, etc.) can hold.*/

int main()
{
  printf("Storage sizes and value ranges of the types char and int\n\n");

  printf("The type char is %s.\n\n", CHAR_MIN < 0 ? "signed" :"unsigned");

  printf(" Type   Size (in bytes)   Minimum         Maximum\n"
         "---------------------------------------------------\n");
  /* The zu specifier is used for size_t types which sizeof returns.*/
  printf(" char %8zu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX );
  printf(" int  %8zu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );

  return 0;
}
