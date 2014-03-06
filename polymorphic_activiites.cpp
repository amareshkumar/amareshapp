#include "polymorphic_activiites.h"
#include "Cats.h"
#include <iostream>
#include "my_utilities.h"

using namespace std;

void Utilities::polymorphic_activities()
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

