/* 
 * File:   MyDbConnect.cpp
 * Author: amakumar
 *
 * Created on August 13, 2015, 4:03 PM
 */

#include "MyDbConnect.hpp"
#include "MyLogger.hpp"

extern MyLogger* mylog;

MyDbConnect::MyDbConnect(){
    //try to get a driver to connect to dbms 
    try {
        driver = get_driver_instance();
    }
    catch (sql::SQLException e){
        mylog->log_msg("Could not get a database driver. Error message: ");
        system("pause");
    }
    
    //try to get the connection now
    try {
        conn = driver->connect("localhost:3306", "root", "");
    }
    catch (sql::SQLException error){
        mylog->log_msg("Could not connect to databse. Error message: ");
        //cout << error; 
        system ("pause");
    }
}

MyDbConnect::~MyDbConnect(){
    //delete driver; 
    delete conn;
    delete query;
    delete rs;
}

void MyDbConnect::UseThisDB(const char* dbname){
    query = conn->createStatement();
    try {
        query->execute(dbname);
    }
    catch (sql::SQLException ex){
        mylog->log_msg("Could not execute this query");
        //cout << ex; 
        system ("pause");
    }
}

void MyDbConnect::ExecuteQuery(const char* statement){
    try {
        rs = query->executeQuery(statement);
    }
    catch (sql::SQLException ex){
        mylog->log_msg("Could not execute this query");
        //cout << ex; 
        system ("pause");
    }
    
    while (rs->next()){
        cout << rs->getString(1);
    }
}