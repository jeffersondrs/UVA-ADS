#include <stdio.h>
main()
{
float numberOne, numberTwo, result1, result2, result3, result4;
	int opc;
	printf("Bem vindo a sua calculadora C\n");
	printf("Digite o primeiro numero\n"	);
	scanf("%f", &numberOne);
	printf ("Digite o Segundo numero\n"	);
	scanf("%f", &numberTwo);
	
	result1 = numberOne + numberTwo;
	result2 = numberOne - numberTwo;
	result3 = numberOne * numberTwo;
	result4 = numberOne / numberTwo;
	
	printf("\n A soma e: %f", result1);
	
	printf("\n A subtracao e: %f", result2);
	
	printf("\n A multiplicacao e: %f", result3);
	
	printf("\n A divisao e: %f", result4);
	}
	
