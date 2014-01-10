#include "my_utilities.h"
#include "programming.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

// Value-Defintions of the different String values
static enum StringValueEnum {
	socailNetwork,
	programmingQuestions,
	contactMe,
	getMeOutOfHere
};

//Create a map to associate these anums with strings (user command)

static std::map <std::string, StringValueEnum> user_command_string_map;

//declaration of user_command_map()
void user_command_map();
static const int MAX_SIZE = 20;

void my_utility(){

	//Initiate mapping of user commands (string) to enum
	//by using calling string map
	user_command_map();

	//std::string  user_command;
	//char* user_command = NULL;
	char user_command[MAX_SIZE];
	std::cout << "Welcome to Amaresh projects\n\n";
	std::cout<<"What you want to do? \n\
				1. social_network_app\n\
				2. programming questions\n\
				3. Contact me\n\
				4. Exit\n\n\
				Write your command: ";
	std::cin >> user_command;
	
	std::cout << "\nyou have chosen to explore about " << user_command << "! Happy Exploring...\n\n";
	//convert string to something compilar can understand without ambiguity

	switch (user_command_string_map[user_command]){
		case socailNetwork: {
								break;
		}
		case programmingQuestions: {
			//Make an object of an interface which give blueprint of all functioalities
									   programming_questions prog_q;
									   string user_command = "";
									   cout << "Enter new string to reverse:\n";
									   getline(std::cin, user_command);
									   cout << programming_questions::Reverse(user_command) << endl;
									   prog_q.Reverse(user_command);
									break;
		}
		case contactMe: {
		}
		case getMeOutOfHere: {
		}

		default: {
					 break; 
		}
	} //end of switch
}


void user_command_map(){
		user_command_string_map["social network"]		= socailNetwork,
		user_command_string_map["programming"]			= programmingQuestions,
		user_command_string_map["programming question"] = programmingQuestions,
		user_command_string_map["contact me"]			= contactMe,
		user_command_string_map["exit"]					= getMeOutOfHere;
}