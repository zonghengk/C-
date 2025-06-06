//#include<iostream>
//#include<string>
//#include <typeinfo>
////#include"person.hpp"
//using namespace std;

//类模板
//template<class NameType,class AgeType>
//class person {
//public:
//	person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showperson() {
//		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//void test01() {
//	person<string, int>p1("li ", 20);
//	p1.showperson();
//}
//int main() {
//	test01();
//	system("pause");
//
//}

//类模板与函数模板区别
//template<class NameType,class AgeType=int>
//
//class person {
//public:
//	person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showperson() {
//		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//void test01() {
//	//person p1("孙悟空", 1000);//无法用自动类型推导
//	person<string, int>p1("孙悟空 ", 20000);
//	p1.showperson();
//}
//void test02() {
//	person<string>p2("孙行者 ", 20000);
//	p2.showperson();
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//类模板中成员函数创建时机
//class person1 {
//public:
//	void showperson1() {
//		cout << "person1 show" << endl;  
//	}
//};
//
//class person2 {
//public:
//	void showperson2() {
//		cout << "person2 show" << endl;
//	}
//};
//template<class T>
//class MyClass {
//public:
//	T obj;
//	//类模板中的成员函数
//	void func1() {
//		obj.showperson1();
//	}
//	void func2() {
//		obj.showperson2();
//	}
//};
//void test01() {
//	MyClass<person1>m;
//	m.func1();
//	//m.func2();
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//
//类模板对象做函数参数
//template<class NameType,class AgeType>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->mName = name;
//		this->mAge = age;
//
//	}
//	void showPerson() {
//		cout << "name: " << this->mName << "age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
////1.指定传入的类型
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
////2.参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>& p) {
//	p.showPerson();
//	cout << "T1的类型为： " << typeid(T1).name() << endl;
//	cout << "T2的类型为： " << typeid(T2).name() << endl;
//}
//void test02() {
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T& p) {
//	cout << "T的类型为： " << typeid(T).name() << endl;
//	p.showPerson();
//}
//void test03() {
//	Person<string, int>p("唐", 30);
//	printPerson3(p);
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

//类模板与继承

//template<class T>
//class Base {
//	T m;
//};
//class Son :public Base<int> {
//
//};
//void test01() {
//	Son s1;
//}
//
//template<class T1,class T2>
//class Son2 :public Base<T2> {
//public:
//	Son2() {
//		cout << "T1的类型为： " << typeid(T1).name() << endl;
//		cout << "T2的类型为： " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//void test02() {
//	Son2<int, char>S2;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//类模板成员函数类外实现
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age); /*{
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//	void showPerson(); /*{
//		cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
//	}*/
//	T1 m_Name;
//	T2 m_Age;
//};
////构造函数类外实现
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//}
//
////成员函数类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//		cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
//}
//
//void test01() {
//	Person<string, int>P("Tom", 20);
//	P.showPerson();
//}
//int main() {
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}

//类模板分文件编写
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//		cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
//}

//void test01() {
//	Person<string, int>P("Jarry", 18);
//	P.showPerson();
//}
//
//int main() {
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}

//类模板和友元
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p) {
//	cout << "姓名： " << p.m_Name << "年龄： " << p.m_Age << endl;
//}
//
//
//
//template<class T1,class T2>
//class Person {
//	//全局函数 类内实现
//	friend void printPerson(Person<T1, T2>p) {
//		cout << "姓名： " << p.m_Name << "年龄： " << p.m_Age << endl;
//	}
//
//	//全局函数 类外实现
//	//加空模板是参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2>p);
//
//public:
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//void test01() {
//	Person<string, int>p("Tom", 20);
//	printPerson(p);
//}
////类外
////加空模板参数列表
////template<class T1,class T2>
////void printPerson2(Person<T1, T2>p) {
////	cout << "姓名： " << p.m_Name << "年龄： " << p.m_Age << endl;
////}
//
//void test02() {
//	Person<string, int>p("Jarry", 20);
//	printPerson2(p);
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//例子
