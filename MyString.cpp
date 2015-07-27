/* 
 * File:   MyString.cpp
 * Author: amakumar
 *
 * Created on July 27, 2015, 1:58 PM
 */

#include "MyString.hpp"
#include "my_project_app.h"

MyString::MyString():m_str(NULL){

    std::cout<<"MyString Object Created\n";
}

MyString::MyString(char* st):m_str(NULL){
    m_str = st; 
    std::cout<<"MyString Object Created\n";
}

MyString::~MyString(){

    std::cout<<"MyString Object Destroyed\n";
}

MyString::MyString(const MyString& str){
    m_str = new char [10]; 
    m_str = str.m_str; 
    cout<<"MyString copy c-tor called\n";
}

char* MyString::GetMyString(){
    return m_str; 
}

