#pragma once
#ifndef MY_APPLICATION_H
#define MY_APPLICATION_H


class MyApplication {
private:
	int *ptr;
protected:
	static MyApplication* _instances;
	MyApplication(){
	}

	MyApplication(const MyApplication& ut){
		instance();
	}

	MyApplication& operator = (const MyApplication& m_app){
		//Check for self assignment
		if (this != &m_app){
			*ptr = * (m_app.ptr);
		}
		return *this;
	}

	~MyApplication(){
		delete _instances;
	}

public:
	static MyApplication* instance(){
		if (!_instances ){
			_instances = new MyApplication();
		}
		else return _instances;
	}

	static void start();

};

class mySingleton {
private:
	mySingleton();
	mySingleton(const mySingleton&);
	mySingleton & operator=(const mySingleton&);
	~mySingleton();
	static mySingleton* pInstance_;

public:
	static mySingleton& instance(){
		//Lock lock(mutex_);
		if (!pInstance_){
			pInstance_ = new mySingleton;
			return *pInstance_;
		}
		//lock releases via lock destructor
		return *pInstance_;
	}
};


#endif //MY_APPLICATION_H