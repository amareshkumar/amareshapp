#include "my_project_app.h"
#include "MyString.hpp"
#include "MyLogger.hpp"
#include <memory>

//List of main functions

#ifdef TEST_MAIN
//int main(){
//	Test obj1 (5);
//	std::cout << "Copy-Constructor\n";
//	std::cout << "before: obj1: ";
//	obj1.display();
//		
//	Test obj2 = obj1;  //shallow copy, copy constructor
//	obj1.take_data(100);
//	
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	
//	std::cout << "\nAssignment-Operator demonstrations\nBefore:\n";
//
//	Test obj3(200);
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//
//	std::cout << "\nWithout own-assignment op\n";
//	obj3 = obj1;
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//
//	std::cout << "\nMy own-assignment op\n";
//	Test obj4(400);
//	obj3 = obj1;
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//	std::cout << "\tobj4: ";
//	obj4.display();
//}
#endif //TEST_MAIN

#ifdef STL_MAIN
//int main(){
//	//stl vector
//	//my_stl_vector();
//
//	//stl set
//
//	Derived* objes = new Derived;
//	cout<<objes->f(3.3);
//	cout << "and\n";
//	cout<<objes->f(3);
//	std::cout << "\nnon-dynamic\n";
//	Derived object;
//	cout<<object.f(4.4);
//	cout<<object.f(4);
//
//	delete objes;
//	std::cout << std::endl;
//		
//	return 0;
//}

#endif //end of STL_MAIN

#ifdef MAIN_OTHER
//MyApplication::start();

//int arr[11] = { 0, 3, 4, 8, 9, 1, 5, 7, 10, 2, 6 };
//std::cout << "Median of the array passed is: " << calculate_median(arr)<<endl;
//my_sort(arr);
//
//print_array(arr);
////my_set();
//my_map();


//udt
//Cat* cat_s;				//static
//Cat* cat_d = new Cat(); //dynamic

//delete (cat_d);

//cat_s = cat_d;

//Cat* cat_d = new Cat;

//my_hash_map();
//print();
//Interview Q: 2

//		cout<<translateColumnIndexToName(28);
//rand_initialize_list();
//print();

//insert_at_front(rand_initialize_list(), 5);

//insert_at_end(rand_initialize_list(), 50);

//insert_at_pos(rand_initialize_list(), 25, 2);

//delete_first_node(rand_initialize_list()); //delete first element
//std::cout << (node_at_pos_n(rand_initialize_list(), 3))->data << std::endl;
#endif //MAIN_OTHER

#ifdef PUZZLE_1

class Test
{
private:
	int x;
	int y;
public:
	Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void setX(int a) { x = a; }
	void setY(int b) { y = b; }
	void destroy()  { 
		//delete this; 
	}
	void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
	Test obj (5, 10);
	obj.destroy();
	obj.print();
	return 0;
}

#endif //PUZZLE_1


void string_man (char* str){
    
}

int main(void){
	//MyApplication::instance();
	//MyApplication::start();
        //my_utility();
	/*
        MyString mystring (const_cast<char*>("Hi, Amaresh Kumar! Have good time!")); 
        
        MyString newString = mystring;       
        cout<<"Original: "<<mystring.GetMyString()<<endl;
        cout<<"Copied (With =) : "<<newString.GetMyString()<<endl;
        
//        char* stringToReverse = (char*) "Amaresh";
//        mystring.StringReverse(stringToReverse);
//        cout << "\nREversed String: " <<stringToReverse<<endl; 
               
        MyString newString2 (mystring);
        cout<<"Copied (With Bracket): "<<newString2.GetMyString()<<endl;
        
        MyString newString3; 
        newString3 = mystring; 
        cout<<"Copied (With Assign Op): "<<newString2.GetMyString()<<endl;
        
        cout <<"No of String object now: "<<mystring.Get_No_of_MyString_Obj()<<endl;
        
        cout<<"\n\nSmart pointers\n";
        std::shared_ptr <MyString> p_myString = std::make_shared<MyString>(); 
        p_myString->SetMyString("my string");
        cout<<"My String Value:"<<p_myString->GetMyString()<<endl; 
        cout <<"No of String object now: "<<p_myString->Get_No_of_MyString_Obj()<<endl; */
        
        //log_msg("Hi AmareshApp");
                
        return 0;
}
