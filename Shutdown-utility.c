#include <stdio.h>
int main() {
  char val;
  printf("Do you want to shutdown your pc (y/n)\n");
  scanf("%c", &val);
if(val == 'y')
{
   //execute your code
  system("shutdown -P now");
}
else if(val == 'n')
{
   //execute your code
  printf("Shutdown action stopped");
}
  return 0;
}
