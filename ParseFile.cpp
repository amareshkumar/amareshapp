#include "ParseFile.hpp"

void parseTextFile (const char* fileWithPath){
    ifstream file; 
    std::string line;
    //std::string data = NULL; 
    file.open(fileWithPath, ios::in);
    
    mylog->log_msg ("File opened\nFile path is:");
    mylog->log_msg(fileWithPath);
    std::istringstream record; 
    while (file.getline (file, line)){
        record (line);
    }
    cout << record;
}

