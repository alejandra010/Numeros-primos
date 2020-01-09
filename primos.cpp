#include <iostream>
#include <thread>
#include<fstream>
#include <conio.h>

void hilo(){
	std::ofstream outfile("alejandra.txt");
	outfile<<"Hola Mundo"<< std::endl <<"Alejandra"<<std::endl;
	outfile.close();
}
