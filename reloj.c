#include <stdio.h>
int main () {
	long dias, horas, minutos, segundos, dato;
	printf("Algoritmo que convierte segundos en dias, horas, minutos y segundos.\n");
	printf("Introduce un valor en segundos:\n");
	scanf("%ld" ,&dato);
	dias = dato / 86400;
	horas = (dato % 86400)/3600;
	minutos = (dato % 3600)/60;
	segundos = (dato % 60);
	if (dato >= 86400){
		printf("El resultado es %ld días, %ld horas, %ld minutos y %ld segundos.\n", dias, horas, minutos, segundos );
	}
	else{
		if (dato >= 3600){
			printf("El resultado es %ld horas, %ld minutos y %ld segundos.\n", horas, minutos, segundos);
		}
		else{
			if (dato >= 60){
				printf("El resultado es %ld minutos y %ld segundos.\n", minutos, segundos);
			}
			else{ if(dato >= 0){
				printf("El resultado es %ld segundos.\n", segundos);
			}
				else{
					printf("Introduce un valor valido en segundos.\n");
				}
			}
		}
	}

		return 0;


}