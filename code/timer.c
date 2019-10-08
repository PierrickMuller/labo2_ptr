#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//@TODO refactor EVERYTHING

struct itimerspec spec;
int iterations = 0;
char timeToLeave = 0;


void timer_handler (int signum){
  static int countiteration = 0;


  if(++countiteration >= iterations){
    timeToLeave = 1;
  }
}

int main (int argc,char **argv){

  timer_t timer;
  struct sigevent event;
  iterations = atoi(argv[1]);

  // Configurer le timer
  signal(SIGRTMIN, timer_handler);
  event.sigev_notify = SIGEV_SIGNAL;
  event.sigev_signo  = SIGRTMIN;
  int nsec = atoi(argv[2]) * 1000;// en nanosec
  spec.it_interval.tv_sec  = nsec / 1000000000;
  spec.it_interval.tv_nsec = nsec % 1000000000;
  spec.it_value = spec.it_interval;

  // Allouer le timer
  timer_create(CLOCK_REALTIME, &event, &timer);

  // Programmer le timer
  timer_settime(timer, 0, &spec, NULL);

  while (!timeToLeave) ;

  return 0;
}
