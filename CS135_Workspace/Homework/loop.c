//Class example of counting down while on loop//
#include <stdio.h>

int main(void)
{
  int countDown=120;

  while (countDown >= 0)
  {
    printf("t minus %d and counting\n", countDown--);
  }
  return 0;
}
