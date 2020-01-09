#include <iostream>
#include <thread>
#include<fstream>
#include <conio.h>

void hilo(){
	std::ofstream outfile("alejandra.txt");
	outfile<<"-------> EJERCICIO <-------"<< std::endl <<"Hola Mundo"<<std::endl <<"Alejandra"<<std::endl <<"-------> EJERCICIO <-------"<<std::endl; 
	outfile.close();
}
int main(){

int num;
int i;
int contador=0;

printf("Ingrese un numero: ");
scanf("%d",&num);

for(i=num; i>0; i--)
{
if(num%i==0)
contador++;
}
if(contador==2)
{
printf("\n El numero que ingreso es primo");
std::thread prueba(hilo);
prueba.join();
}
else 
printf("\n El numero que ingreso no es primo")
getch();
}


