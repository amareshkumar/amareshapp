#include "MyLogger.hpp"

void MyLogger::log_msg (const char* writeThis) {
    fstream myfile; 
    myfile.open("D:/code/amareshapp/logger.txt", ios_base::in | ios_base::app);
    
    myfile << writeThis <<endl;
}