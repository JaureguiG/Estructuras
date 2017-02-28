#include <iostream>
#include <cstdio>

float phi(int iteraciones, int cociente)
{
	if(iteraciones == 0 || iteraciones == 1) {
		return cociente;
	}
	return 1.0 + 1.0 / phi(--iteraciones, cociente);
}

int main()
{
	int iteraciones, cociente;

	printf("iteraciones: ");
		scanf("%i", &iteraciones);
	printf("cociente: ");
		scanf("%i", &cociente);

	printf("phi = %f", phi(iteraciones, cociente));
  
  //ejemplo de 51v4n
  
return 0;
}
