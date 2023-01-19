#include "funkcje.h"
#include <stdio.h>
int silnia(int n){
 if(n==0) return 1;

  else return silnia(n-1)*n;
}
