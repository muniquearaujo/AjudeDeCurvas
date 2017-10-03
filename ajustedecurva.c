#include<stdio.h>
#include<stdlib.h>
#define n 11
FILE *fp;

main()
{
	int i;
	float a[n], b[n];
	if( (fp=fopen("dados.dat", "r"))==NULL)
	printf("\n Arquivo vazio\n");
	
	else
	printf("\nPontos:\n");
	{	//escrevendo os somatório dos mmq's
		for(i=1;i<n;i++)
		{
			fscanf(fp, "%f\t%f\n",&a[i],&b[i]); 
			printf("%f\t%f\n", a[i], b[i]);
		}
	}	
		
}
