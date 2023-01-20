    #include "funkcje.h"
    #include <stdio.h>
    int petla(int n)
    {
	for (int i=1;i<=n;i++){ // pętla for //
            wynik*=i;
	printf("wykonanie pętli nr: %d", i);
        }
        return wynik;
    }
