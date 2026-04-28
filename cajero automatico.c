#include <stdio.h>

int main() {
	//variables 
	float saldo=1000;
	float monto;
	int pin=1234; 
	int pint;
	int intento=0;
	int menu;
	
	//ingreso de pin
	printf("cajero automatico \n");
	while (intento != 3){
		printf("ingrese un pin de 4 digitos: ");
		scanf("%d", &pint);
		if (pin == pint){
			printf("acceso concedido\n");
			intento=3;
		}
		else {
			printf("acceso denegado \n");
			intento++;
		}
	}
	printf("tarjeta bloqueada ");
	
	//menu del cajero
	printf("seleccione una opcion: \n 1-consultar saldo \n 2-depositar dinero \n 3-extraer dinero \n 4-cambiar pin \n 5-salir \n");
	scanf("%d", &menu);
	switch (menu){
	case 1:
		printf("su saldo actual es de: %2.f", saldo);
		break;
	case 2:
		printf("ingrese el monto a agregar: ");
		scanf("%f", &monto);
		if (monto > 0){
			saldo = saldo + monto;
			printf("su saldo actual es de: %2.f", saldo);
		}
		else {
			printf("monto invalido");
		}
		break;
	case 3:
		printf("ingrese el monto a retirar: ");
		scanf("%f", &monto);
		if (monto < saldo && monto > 0){
			saldo = saldo - monto;
			printf("su saldo actual es de: %2.f", saldo);
		}
		else if (monto > saldo) {
			printf("fondos insuficientes");
		}
		else if (monto < 0) {
			printf("numero invalido");
		}
		break;
	case 4:
		//verificar pin actual
		printf("ingrese pin actual: ");
		scanf("%d", &pint);
		if (pin == pint){
		//cambio de pin
		printf("ingrese nuevo pin: ");
		scanf("%d", pint);
		if ( pint >=1000 && pint <= 9999){
			pin = pint;
			printf("pin cambiado con exito");
		}		
      	}
		break;
	}
	return 0;
}

