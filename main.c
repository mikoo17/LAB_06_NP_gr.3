
#include <stdio.h>
#include "funkcje.h"

int main(void) {
  int n; // deklaracja zmiennej n typu int//
  printf("Podaj liczbę n, której silnię chcesz obliczyć\n"); // wyświetlenie w konsoli komunikatu dla użytkownika //
  scanf("%d", &n); //pobranie od użytkownika wartości n//

  if(n<0) printf("Podaj liczbę większą równą zero"); // sprawdzenie poprawności liczby wpisanej przez użytkownika //
  else wybor(n) // przejscie do funkcji wybierania sposobu obliczania silnii//
  printf("Silnia z liczby %d  to %d",n,wynik); // wyświetlenie wyniku//
  return 0; //koniec programu

}
