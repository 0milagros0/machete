#include <stdio.h>

int main() 
{
	int edad;
	char inicial;
	float altura;
	
	printf("ingresar edad\n");
	scanf("%d", &edad);
	printf("ingresar altura \n");
	scanf("%f", &altura);
	printf("ingresar primer letra del nombre\n");
	scanf(" %c", &inicial);
	
	printf("edad: %d\n", edad);
	printf("altura; %2.f\n", altura);
	printf("inicial de nombre; %c\n", inicial);
	
	return 0;
}

