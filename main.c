//napisz funkcję silnia wykorzystując rekurencję

#include <stdio.h>
#include "funkcje.h"

int main(void) {
  int n; // deklaracja zmiennej n typu int//
  int m=3;
  printf("Podaj liczbę n, której silnię chcesz obliczyć\n"); // wyświetlenie w konsoli komunikatu dla użytkownika //
  scanf("%d", &n); //pobranie od użytkownika wartości n//

  if(n<0) printf("Podaj liczbę większą równą zero"); // sprawdzenie poprawności liczby wpisanej przez użytkownika //

  else printf("Silnia z liczby %d  to %d",n,silnia(n)); // wyświetlenie wyniku//
<<<<<<< HEAD
  return 0;//wywołanie konfliktu//
=======
  return 0; //koniec programu
>>>>>>> 61d4fcf799b987a6e4315e406a829274ff0ac8bf
}
