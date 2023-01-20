#include "funkcje.h"
#include <stdio.h>
	int wybor(int n) 
{
	int opcja;
	printf("Wybierz sposób obliczania silni:\n1 - petla\n2 - rekurencja\n");
	scanf("%d", &opcja);
	if (opcja == 1) 
	{
		petla(n);
	}	
	if (opcja == 2) 
	{
		silnia(n);
	}
	return 0;
}