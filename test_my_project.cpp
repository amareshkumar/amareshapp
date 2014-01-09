#include <iostream>
#include "my_utilities.h"
#include <string>


std::string& word_reversal(std::string word){
	
	return word;
}


void main(int argc, char **argv){
	//my_utility();
	
	
	std::string user_command;
	std::cin >> user_command;
	std::cout << user_command;
	std::cout<<word_reversal(user_command);

}