#include <string>
#include <iostream>
#include <vector>

using namespace std;

static const int command_max_size = 100;

std::string& reverse(std::string &st, int init, int final){
	int lenght = st.size();
	string temp = "";
	for (int i = init; i < final; i++){
		temp[i] = st[i];
		st[i] = st[(lenght - final) - i - 1];
		st[(lenght - i) - init - 1] = temp[i];
	}
	return temp;
}


std::string& reverse_word_wise(std::string &str){
	//string temp = str;
	//cout << temp;
	static int position = 0;;
	for (int i = position; i < str.size(); i++){
		if ((str[i] == '\t') || (str[i] == ' ')) {
			reverse(str, position, i);
		}
	}
	return str;
}


void reversal (){
	std::vector<char> user_command(command_max_size);
	std::cout<<"enter command: fix me";
	//std::get (user_command);
}