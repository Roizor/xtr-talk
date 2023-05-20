#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sodium.h>
#include "xtr.c"

int main( ) {

  if (sodium_init() < 0) {
        /* panic! the library couldn't be initialized, it is not safe to use */
        return 1; 
    }

  // Not even i'm sure how this code works

  srand(time(NULL) * 0.5 * time(NULL));

  char buf[xtr_talk_length + 1];
  for (size_t i = 0; i < xtr_talk_length; i++) {
    buf[i] = xtr_possible[rand() % xtr_length()];
  }
  buf[xtr_talk_length] = '\0';

  puts(buf);
  return 0;
}