#include <stdio.h> 
int main () {
	long num1,num3,num2,i;
	printf("Algoritmo que calcula el factorial de un numero dado.\n");
	printf("Introduce el numero del que desea calcular el factorial.\n");
	scanf("%ld", &num3);
	num1 = 1;
	num2 = num3;
	if (num3 > 0){
			for (i = 1; i < num2; i++){
		num1 = num1 * num3;
		num3--;
	}
	printf("El factorial es igual a %ld.\n",num1 );
	}
	else{ if (num3 == 0){
		printf("El factorial es igual a 1.\n");
	}
	else{
		printf("El numero introducido debe ser mayor o igual que 0.\n");
	}
	}


	return 0;
}
