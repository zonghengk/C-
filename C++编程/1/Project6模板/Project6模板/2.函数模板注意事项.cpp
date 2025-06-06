#include<iostream>
using namespace std;

//函数模板注意事项
//1.自动类型推导，必须推导出一致的数据类型T
//2.模板必须要确定T的数据类型才可以使用
//template<class T>//tempname可以替换成class
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//自动类型推导
//	mySwap(a, b);
//	//mySwap(a, c);//错误T并不一致
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//	//显示指定类型
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
//template<class T>
//void func() {
//	cout << "函数调用" << endl;
//}
//
//void test02() {
//	func<int>();
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
