/*
 * exception.cpp
 *  Created on: 2020年9月6日
 *  Author: guardwhy
 */
#include <iostream>
using namespace std;

// 抛出所有类型异常
void TestFunction01(){
	throw 10;
}

// 只能抛出int char char*类型异常
void TestFunction02() throw(int, char, char*){
	string exception = "error";
	throw exception;
}

// 不能抛出任何类型异常
void TestFunction03() throw(){
	throw 10;
}

int main(){
	try{
		// 调用函数
		TestFunction01();
		TestFunction02();
		TestFunction03();
	}catch(...){
		cout << "捕获异常..!" << endl;
	}
	return 0;
}


