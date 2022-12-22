#include <time.h>
#include <stdio.h>
int fun1(int n){
  int i,j;
  for (i=0;i<n;i++){    //O(N+1)
    j=1;                //O(N)
  }
}

#define MAX 20000

int main(){
  int i,j=0;  // Indexes
  double f;   // Time

  clock_t t;   // structure clock_t

  for (i=0;i<MAX;i+=100){

    t = clock();  // Initialize t to the current clock per sec/time
    fun1(i);
    t=clock()-t;
    
    if(i%1000 == 0){
      f=1000*((double)t)/CLOCKS_PER_SEC;
      printf("%d %f\n",i,f);
      fflush(stdout);
    }
  }

  return 0;
}
