#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 11
FILE *fp;

main()
{
	int i;
	float a[n], b[n],a1, ao, xy=0.0, x1=0.0, y1=0.0, xq=0.0;
	if( (fp=fopen("dados.dat", "r"))==NULL)
	printf("\n Arquivo vazio\n");
	
	else
	printf("\nPontos:\n");
	{	
		for(i=1;i<n;i++)
		{
			fscanf(fp, "%f\t%f\n",&a[i],&b[i]); 
			printf("%f\t%f\n", a[i], b[i]);
		}
	}	
	//fazendo as contas dos somatórios 
	for(i=1;i<n;i++)
	{	
		xy=a[i]*b[i]+xy;
		x1=a[i]+x1;
		y1=b[i]+y1;
		xq=((pow(a[i],2))+xq);
	} 
	//impresão dos valores encontrados no somatótio
	printf("\nValor de xy=%.3f\n", xy);
	printf("\nValor de somatório de x=%.3f e de y=%.3f\n", x1, y1);   
	printf("\nValor de xq=%0.3f.\n", xq);
		
	//calculandos os valores do ajuste linear
	a1=(((n-1)*xy)-(x1*y1))/(((n-1)*xq)-(pow(x1,2)));
	ao=((xq*y1)-(xy*x1))/(((n-1)*xq)-(pow(x1,2)));	
			
}
