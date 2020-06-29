#include <stdio.h>
int main()
{
	float ph;
	scanf("%f", &ph);
	if(ph<7)
		printf("Acida\n");
	if(ph==7)
		printf("Neutra\n");
	if(ph>7)
		printf("Basica\n");
	return 0;

}