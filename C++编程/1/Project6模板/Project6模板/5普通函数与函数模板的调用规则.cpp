#include<iostream>
using namespace std;
//1,都可以调用，优先普通函数
//void myPrint(int a, int b) {
//	cout << "调用普通函数" << endl;
//}
//template<class T>
//void myPrint(T a, T b) {
//	cout << "调用模板" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c) {
//	cout << "调用重载模板" << endl;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//通过空模板参数列表
//	//myPrint<int>(a, b);
//
//	//myPrint(a, b, 100);
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1,c2);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}