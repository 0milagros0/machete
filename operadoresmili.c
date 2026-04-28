#include <stdio.h>

int main() 
{
	int a, b;
	
	printf("ingresar primer numero\n");
	scanf("%d",&a);
	printf("ingresar segundo numero\n");
	scanf("%d",&b);
	//operadores matematicos
	printf("suma: %d\n", a+b);
	printf("resta: %d\n", a-b);
	printf("multiplicacion: %d\n", a*b);
	printf("division: %d\n", a/b);
	printf("resto de la division: %d\n", a%b);
	//operadores racionales
	printf("comparacion a igual a b: %d\n", a==b);
	printf("comparacion a disitinto de b: %d\n", a!=b);
	printf("comparacion a mayor a b: %d\n", a>b);
	printf("comparacion a menor a b: %d\n", a<b);
	printf("comparacion a mayor o igual a b: %d\n", a>=b);
	printf("comparacion a menor o igual a b: %d\n", a<=b);
	//operadores logicos
	printf("resultado (a>b)&&(b!=0): %d\n", (a>b)&&(b!=0));
	printf("resultado (a>b)||(b!=0): %d\n", (a>b)||(b!=0));
	//asignacion combinados
	printf("resultado %d\n",a+=b);
	printf("resultado %d\n",b*=2);
	
	
	
	return 0;
}

