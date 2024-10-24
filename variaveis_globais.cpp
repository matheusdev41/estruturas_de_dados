#include <stdio.h>
int num3;

int main()
{
	int num1,num2;
	num1 = 10;
	num2 = 20;
	num3 = num1+num2;
	printf("%d + %d = %d",num1,num2,num3);
	return(0);
}

// As variaveis locais e as globais podem ter o mesmo
// identificador, dentro de uma sub-rotina as variaveis
// locais sobhrepoem as variaveis globais
