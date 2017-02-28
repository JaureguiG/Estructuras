#include <stdio.h>

long count;

void hanoi(int n, char source, char target,char aux){

if(n==0) return;

hanoi(n-1, source , aux, target);

printf("%c->%c\n", source,target);

hanoi(n-1,aux,target,source);

count++;

}

int main(int argc, const char * argv[]){

int n; //=3; //numero de discos que tenemos

scanf("%i",&n);

count=0;

hanoi(n, 'A','C','B');

printf("\nCantidad de Movimiento:%i\n",count);

return 0;
}
