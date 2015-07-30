#include "MyLogger.hpp"

MyLogger* MyLogger::pInstance_ = NULL;

//Create the only object of MyLogger and make it available to others files

MyLogger* mylog = MyLogger::get_instance();

void MyLogger::log_msg (const char* writeThis) {
    fstream myfile; 
    myfile.open("D:/code/amareshapp/logger.txt", ios_base::in | ios_base::app);
    
    myfile << writeThis <<endl;
}