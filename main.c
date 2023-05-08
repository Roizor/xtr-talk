#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM_STRING_LENGTH 50

int main( ) {
  srand(time(NULL));

  char buf[RANDOM_STRING_LENGTH + 1];
  for (size_t i = 0; i < RANDOM_STRING_LENGTH; i++) {
    buf[i] = "abcdefghijklmnopqrstuvwxyz:;1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ€¢$¢¥.!,/<>?"[rand() %77];
  }
  buf[RANDOM_STRING_LENGTH] = '\0';

  puts(buf);
  return 0;
}