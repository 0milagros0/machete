#include <stdio.h>

int main() 
{
	//DATOS DE ENTRADA
	float km;
	float dia;
	float precio;
	printf("ingresar distancia a recorrer: ");
	scanf("%f", &km);
	printf("ingresar dias de instancia: ");
	scanf("%f", &dia);
	precio=2500*km;
	//verificar datos ingresados aqui
	if km<0{
		
	} 
	//CALCULO
	if (dia>7 && km>800){
		precio=precio-(precio*0.3);
	}
	//SAlIDA
	printf("precio a pagar: %2.f", precio);
	return 0;
}

