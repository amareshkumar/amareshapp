
#ifndef  MY_UTILITIES_H
#define MY_UTILITIES_H
#pragma once
//#include "my_project_app.h"


//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <netdb.h>

void my_utility();


class Utilities {
protected: 
	static Utilities* _instances;
	Utilities(){
	}
	Utilities(Utilities& ut){
		instance();
	}
public:
	static Utilities* instance(){
		if (_instances == 0){
			_instances = new Utilities();
		}
		else return _instances;
	}

	static void test(){
		std::cout << "I am in Singleton\n";
	}
	static void polymorphic_activities();
};


/*

//Wind flute;
//tune(flute);

//cout << endl;
//flute.display_info();
//cout << endl;

//Instrument::display_info();
//flute.display_info();


//matrix_op matrix_op;
//matrix_op.replaceWithZero();

//GPU Specific:

//GpuSpecific gpuSpecific;
//gpuSpecific.parallelism();

//ThrustActivitest thrustApp;
//thrustApp.start();
//
//my_functor_op myfunctor;
//myfunctor.functor_op();

*/

#endif // MY_UTILITIES_H
