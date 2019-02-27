#include <stdio.h>
int main () {
	int prim, seg, suma, salir;
	printf("Programa que calcula la suma de un intervalo.\n");
	do
	{
		printf("Introduce el primer valor del intervalo:\n");
		scanf("%d",&prim);
		printf("Introduce el segundo valor:\n");
		scanf("%d",&seg);
		suma = 0;
		if (prim > seg){
				for (int i = prim; i >= seg; i--)
				{
					suma = suma + i;
				}
				printf("La suma del intervalo es %d\n",suma);
				salir = 1;
			}
		else{
			printf("El primer numero debe ser mayor que el segundo.\nReintroduce los datos:\n");
			salir = 0;
		}

	} while (!salir);

	return 0;

}