#pragma once
#ifndef CATS_H
#define CATS_H
#include <iostream>

// file cats.h

//abstract class "Felid"
class Felid {
protected: 
	char* felid_detail = "Felid Family";
public:
	Felid (){
		std::cout << "Constructor called: Felid\n";
	}
	virtual void meow() = 0;
	virtual ~Felid()
	{
		std::cout << " Destructor Called: Felid\n";
	}
};

void do_meowing(Felid &cat);

class Cat : public Felid {
public:
	Cat(){
		std::cout << "Constructor called: Cat\n";
	}
	void meow() { std::cout << "Meowing like a regular cat! meow!\n"; }
	~Cat(){
		std::cout << " Destructor Called: Cat\n";
	}
};

class Tiger : public Felid {
protected:
	int no_of_tigers_alive = 10000;
public:
	Tiger(){
		std::cout << "Constructor called: Tiger\n";
	}
	virtual void habitant_area(){
		std::cout << "In South AFrica\n";
	}
	void meow() { std::cout << "Meowing like a tiger! MREOWWW!\n"; }
	virtual ~Tiger(){		std::cout << " Destructor Called: Tiger\n";	}
};

class Ocelot : public Felid {
protected:
	float avg_height_of_Ocelot = 1.5f;
public:
	Ocelot(){
		std::cout << "Constructor called: Ocelot\n";
	}
	void meow() { std::cout << "Meowing like an ocelot! mews!\n"; }
	~Ocelot(){ std::cout << " Destructor Called: Ocelot\n"; }
};

#endif //cats_h