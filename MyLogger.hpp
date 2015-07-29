/* 
 * File:   MyLogger.hpp
 * Author: amakumar
 *
 * Created on July 28, 2015, 3:01 PM
 */

#ifndef MYLOGGER_HPP
#define	MYLOGGER_HPP

#include "my_project_app.h"
#include <fstream>

class MyLogger {
private:
	MyLogger(){
           // my_log_file.open("D:\code\amareshapp\my_log_file.log", std::fstream::in || std::fstream::out || std::fstream::app);
        }
	MyLogger(const MyLogger&);
	MyLogger& operator = (const MyLogger&);
	~MyLogger() {
            my_log_file.close(); 
        }
	static MyLogger* pInstance_;
public:
	static MyLogger& instance(){
		//Lock lock(mutex_);
		if (!pInstance_){
			pInstance_ = new MyLogger;
			return *pInstance_;
		}
		//lock releases via lock destructor
		return *pInstance_;
	}
        
        void log_msg (const char* log_str);
        static std::fstream my_log_file; 
};

#endif	/* MYLOGGER_HPP */

