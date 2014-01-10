#include <iostream>
#include "my_utilities.h"
#include "programming.h"
#include "Instrument.h"
#include <string>
using namespace std;


//void display_info(){
//	std::cout << "Size of virtual (Base Class): "<<sizeof(Instrument)<<endl;
//	std::cout << "Size of virtual Wind (derived Class): " << sizeof(Wind) << endl;
//}

void main(int argc, char **argv){
	//my_utility();
	Wind flute;
	
	//tune(flute);
	
	cout << endl;
	flute.display_info();
	cout << endl;
	//Instrument::display_info(); 
	//flute.display_info();



	
}