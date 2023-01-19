//napisz funkcję silnia wykorzystując rekurencję

#include <stdio.h>
#include "funkcje.h"

int main(void) {
  int n;
  printf("Podaj liczbę n, której silnię chcesz obliczyć\n");
  scanf("%d", &n);

  if(n<0) printf("Podaj liczbę większą równą zero");

  else printf("Silnia z liczby %d  to %d",n,silnia(n));
  return 0;
}
