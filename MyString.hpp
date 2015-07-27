/* 
 * File:   MyString.hpp
 * Author: amakumar
 *
 * Created on July 27, 2015, 1:53 PM
 */

#ifndef MYSTRING_HPP
#define	MYSTRING_HPP

class MyString {
public:
    MyString();
    ~MyString();
    MyString (char* st);
    MyString (const MyString & str);
    MyString& operator = (const MyString & str);
    int GetLength (MyString& str) const;
    char* GetMyString ();
    void SetMyString ();
    int Get_No_of_MyString_Obj() const; 
    
private:
    char* m_str; 
    static int no_of_MyString_Obj; 
};

#endif	/* MYSTRING_HPP */

