#include <cstdio>

void ejemplo1(){
int a = 75;
int *p=&a;
printf("a:%i\n",a);
printf("p:%i\n",*p);

a+=5;

printf("a:%i\n",a);
printf("p:%i\n",*p);


*p+=5;

printf("a:%i\n",a);
printf("p:%i\n",*p);
//tomando la direccion de la variable p que tiene la variable a osea 85
printf("\np:%ul\n",p);
printf("\np:%x\n",p);
}

void ejemplo2(){

int lista[10]={3,5,8,2,5,3,7,6,2,9};
//int *p= &lista[0];
printf("Unidad de desplazamiento de int: %u\n\n", sizeof(int));

for(int i=0;i<10;i++){

//printf("%4i",*(p+i));

//printf("%2i %u: %4i\n,i,p+i",*(p+i));
printf("%2i %u: %4i\n",i,lista+i,*(lista+i));

}

printf("\n\n");

}
void print(int *lista, int size){

for(int i=0;i<size;i++){

//printf("%4i",*(p+i));

//printf("%2i %u: %4i\n,i,p+i",*(p+i));

//printf("%4i",*(p+i));

//printf("%2i %u: %4i\n,i,p+i",*(p+i));
printf("%2i %u: %4i\n",i,lista+i,*(lista+i));
}

printf("\n\n");


}
void print_2 (int *lista, int size){


for(int i=0 ;i< size;i++){

printf("%2i %u: %4i\n",i,lista+i,*lista++);

}
printf("\n\n");
}

void ejemplo3(){

char *saludo = "Hola mundo";

for(char *p= saludo;*p !='\0';p++){

putchar(*p);

}
putchar('\n');

}

void swap(int *a, int *b){

int x = *a;
*a=*b;
*b= x;
}

void ejemplo4(){

int x=4;
int y=7;

printf("x:%i\ny:%i\n",x,y);

swap(&x,&y);

printf("x:%i\ny:%i\n",x,y);

}
typedef struct {

float x,y;
}point;

float slope (point &a, point &b){
return (b.y - a.y)/(b.x - a.x);
}
void ejemplo5(){

point *p= new point;
point *q= new point;

p-> x=5;
p-> y=4;

q->x =3;
q->y=-2;

float m=slope (*p,*q);

printf ("slope:%f\n",m);

}


int main(int arg, const char*argv[]){

ejemplo1();
//ejemplo2();
//print_2();
ejemplo3();
//swap();
ejemplo4();
//ejemplo5();
}

