#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "xtr.c"

int main( ) {
  srand(time(NULL));

  char buf[RANDOM_STRING_LENGTH + 1];
  for (size_t i = 0; i < RANDOM_STRING_LENGTH; i++) {
    buf[i] = XTR_POSSIBLE[rand() % xtr_length()];
  }
  buf[RANDOM_STRING_LENGTH] = '\0';

  puts(buf);
  return 0;
}