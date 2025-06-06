#include<iostream>
using namespace std;


//函数模板
//C++另一种编程思想成为泛型编程  两种模板机制函数模板，类模板
//语法

//交换两个整形函数
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////浮点
//void swapDouble(double &a, double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>
//void mySwap(T&a,T&b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//自动类型推导
//	mySwap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//	//显示指定类型
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//
//}
