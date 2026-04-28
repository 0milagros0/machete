#include <stdio.h>
//resultado
//111
//011
//001
int main() 
{
	int i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j>=i){
				printf("1");
			}else{
				printf("0");
			}
		}
	printf("\n");
	}

	return 0;
}

