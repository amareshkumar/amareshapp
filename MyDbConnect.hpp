/* 
 * File:   MyDbConnect.hpp
 * Author: amakumar
 * To use this header file please download MySQL connector from here
 * http://dev.mysql.com/downloads/connector/cpp/
 * Created on August 13, 2015, 2:44 PM
 */

#ifndef MYDBCONNECT_HPP
#define	MYDBCONNECT_HPP

//#include "my_project_app.h"
//#include "mysql_connection.h"
//#include "mysql_driver.h"
#include "cppconn/driver.h"
#include "cppconn/statement.h"
#include "cppconn/connection.h"
#include "cppconn/resultset.h"
#include "cppconn/exception.h"
#include "cppconn/build_config.h"
#include "cppconn/config.h"
//#include <driver.h>
//#include <statement.h>

class MyDbConnect {
public:
    MyDbConnect ();
    void ExecuteQuery (const char* query);
    virtual ~MyDbConnect();
    void UseThisDB(const char* dbname);
private:
    sql::Driver *driver; 
    sql::Connection *conn; 
    sql::Statement *query;
    sql::ResultSet *rs; 
};

#endif	/* MYDBCONNECT_HPP */