/* 
 * File:   MyString.cpp
 * Author: amakumar
 *
 * Created on July 27, 2015, 1:58 PM
 */

#include "MyString.hpp"
#include "my_project_app.h"
#include "MyLogger.hpp"
#include <string>
#include <cstring>

int MyString::no_of_MyString_Obj = 0;
extern MyLogger* mylog; 


MyString::MyString():m_str(NULL){
    mylog->log_msg("MyString C-tor\n");
    no_of_MyString_Obj++;
}

MyString::MyString(const char* st):m_str(NULL){
    m_str = const_cast <char*> (st); 
    mylog->log_msg("MyString 1-C-tor\n");
    no_of_MyString_Obj++;
}

MyString::~MyString(){
    //delete the memory allocated in copy c-tor
    //delete m_str; 
    mylog->log_msg("MyString D-tor\n");
    no_of_MyString_Obj--;
}

MyString::MyString(const MyString& str){
    m_str = new char [sizeof (str)];
    m_str = str.m_str; 
    mylog->log_msg("MyString copy c-tor called\n");
    no_of_MyString_Obj++;
}

MyString& MyString::operator = (const MyString & str){
    delete [] m_str; 
    
    m_str = str.m_str; 
    return *this; 
}

char* MyString::GetMyString(){
    return m_str; 
}

int MyString::Get_No_of_MyString_Obj() const{
    return no_of_MyString_Obj;
}

void MyString::SetMyString(const char* st) {
    m_str = const_cast<char*>(st); 
}

void MyString::StringReverse (char *&reversed){
    char temp; 
    int st_len = strlen(reversed);  // replace with your own function
    
    mylog->log_msg("the copied string is: ");
    mylog->log_msg (reversed);
    
    mylog->log_msg("Before the loop for reverting the string\n");
    for (int i = 0; i < (st_len/2); i++){
        //swap the chars 
        temp = reversed[i];
        reversed [i] = reversed[st_len - i - 1];
        reversed[st_len - i - 1] = temp;
    }
    mylog->log_msg("After the loop for reverting the string\n");
}

char* MyString::operator+ (char* str){
    strcpy (this->m_str, str);
    return m_str; 
}

//char* MyString::myAppend (char* strToAppend) {
//
//    char* temp = new char (sizeof(m_str) + sizeof(strToAppend)); 
//    //To do 
//    //temp 
//}