#include <iostream>
#include "my_utilities.h"
#include "programming.h"
#include "Instrument.h"
#include <string>
#include "My_Threads.h"
#include "ThrustActivitest.h"
#include "reversal.h"
#include "Cats.h"

using namespace std;

class GpuSpecific {

public:
	void parallelism(){


	}

};


// templated functor to add numbers
template< typename T >
class add
{
public:
	T operator()(T a, T b)
	{
		return a + b;
	}
};

class my_functor_op {

	public:
		void functor_op(){
			int x = 10; int y = 20; int z;
			add<int> func; // create an add functor for T=int
			z = func(x, y); // invoke functor on x and y
			//float x = 10; float y = 20; float z;
			//add<float> func; // create an add functor for T=float
			//z = func(x, y); // invoke functor on x and y	
		}
};

class matrix_op {


public: 
	void replaceWithZero(){
		static int arr[4][4] = { { 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 10, 0, 11 },
								{ 12, 13, 14, 15 } };
		display(arr);  //see the matrix
		for (int i = 0; i < 4; i++){
			static int value = 0;
			static int value_row = 0;
			for (int j = 0; j < 4; j++){
				if (arr[i][j] == 0){
					value_row = i;
					arr[value_row][value++] = 0;
				}

				value = j-1;
			}
			arr[i][value] = 0;
		}
		cout<<endl;
		display(arr);  //see the resulted matrix
	}

	void display(int arr[4][4]){
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				cout << arr[i][j]<<" ";
			}
			cout << endl;
		}
	}
};

//void display_info(){
//	std::cout << "Size of virtual (Base Class): "<<sizeof(Instrument)<<endl;
//	std::cout << "Size of virtual Wind (derived Class): " << sizeof(Wind) << endl;
//}


void main(int argc, char **argv){
	//my_utility();
	//Wind flute;
	
	//tune(flute);
	
	//cout << endl;
	//flute.display_info();
	//cout << endl;

	//Instrument::display_info(); 
	//flute.display_info();
	

	//My_ThreadActivities my_thread_act;
	//my_thread_act.simple_thread_example();
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


	void polymorphic_activiites()
	{
		Cat cat;
		Tiger tiger;
		Ocelot ocelot;

		cout << "size of Felid: " << sizeof(Felid) << "\n";
		cout << "size of cat:  " << sizeof (Cat) << "\nSize of Tiger: " << sizeof (Tiger) << "\nSize of Ocelot: " << sizeof(Ocelot) << "\n";

		do_meowing(cat);
		do_meowing(tiger);
		do_meowing(ocelot);

		cout << "\n\nCreating again\n\n";
		Felid* felids[3] = { new Cat(), new Tiger(), new Ocelot };
		felids[0]->meow();
		felids[1]->meow();
		felids[2]->meow();

		for (int i = 0; i < 3; i++) {
			delete felids[i]; std::cout << "\n";
		}
		std::cout << "\nEnd of \"Creating again\"\n\n";


		std::cout << "\n\nAnother practical\n";
		//Felid felid;
		std::cout << "\nEnd of \"Another practical\"\n\n";

	}

	polymorphic_activiites();

	

}  //end of main()