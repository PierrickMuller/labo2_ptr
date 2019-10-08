#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define NB_MESURES 30

int clock_getres(clockid_t clk_id, struct timespec *res);
int clock_gettime(clockid_t clk_id, struct timespec *tp);


int main(int argc,char **argv){
  struct timespec tv;
  struct timespec tv2;
  int i;

  for(i = 0; i < NB_MESURES; ++i) {

    //clock_getres(CLOCK_REALTIME,&tv);
    clock_gettime(CLOCK_REALTIME,&tv2);
    //printf("1) %2d : %ld.%06ld\n", i, tv.tv_sec, tv.tv_nsec);
    printf("2) %2d : %ld.%06ld\n", i, tv2.tv_sec, tv2.tv_nsec);
  }
  return EXIT_SUCCESS;
}
