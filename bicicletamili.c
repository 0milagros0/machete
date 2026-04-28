#include <stdio.h>

int main() 
{
	const int rueda=2;
	float precio;
	char marca='F';
	int anio;
	printf("ingresar precio de la bicicleta\n");
	scanf("%f", &precio);
	printf("ingresar año de fabricacion\n");
	scanf("%d", &anio);
	
	printf("cantidad de ruedas; %d\n", rueda);
	printf("precio de la bicicleta: $%2.f\n ", precio);
	printf("año de fabricacion: %d\n", anio);
	printf("tipo de marca: %c\n", marca);
	return 0;
}

