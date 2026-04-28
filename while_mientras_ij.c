#include <stdio.h>

int main() 
{
	int i=0;
	int j=0;
	
	while(i++ <3)
	{
		j=0;
		while(++j<3)
		{
			printf("%d%d,", i, j);
		}
	}
	return 0;
}
//resultado 11,12,21,22,31,32,
