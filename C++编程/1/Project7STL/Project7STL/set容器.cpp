#include<iostream>
using namespace std;
#include<set>

//void printSet(set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//	printSet(s1);
//
//	set<int>s2(s1);
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//void printSet(set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01() {
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//	printSet(s1);
//
//	if (s1.empty()) {
//		cout << "s1为空" << endl;
//	}
//	else {
//		cout << "s1大小不为空 " << endl;
//		cout << "s1大小" << s1.size() << endl;
//	}
//
//}
//void test02() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>s2;
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//插入删除
//void printSet(set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//	printSet(s1);
//
//	s1.erase(s1.begin());
//	printSet(s1);
//	s1.erase(30);
//	printSet(s1);
//	s1.clear();
//	printSet(s1);
//}
//int main() {
//	test01();
//	
//	system("pause");
//	return 0;
//}
//查找和统计
//void printSet(set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end()) {
//		cout << "找到 " << *pos << endl;
//	}
//	else {
//		cout << "没找到 "<< endl;
//	}
//	printSet(s1);
//}
//
//void test02() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//	int num = s1.count(30);
//	cout << "num= " << num << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause"); 
//	return 0;
//}

//set和multiset
//void printSet(set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	set<int>s;
//	pair<set<int>::iterator, bool>ret = s.insert(10);
//	if (ret.second) {
//		cout << "第一次插入成功 " << endl;
//
//	}
//	else {
//		cout << "第一次插入失败 " << endl;
//	}
//
//	ret = s.insert(10);
//	if(ret.second) {
//		cout << "第二次插入成功 " << endl;
//
//	}
//	else {
//		cout << "第二次插入失败 " << endl;
//	}
//	multiset<int>ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	
//	system("pause"); 
//	return 0;
//}

//pair对组创建
//成对出现的数据，利用对组可以返回两个数据

//两种创建方式
//pair<type, type>p(value1, value2);
//pair<type,type>p=make_pair(value1,value2)

//void test01() {
//	pair<string, int>p("Tom", 20);
//	cout << "姓名： " << p.first << "年龄： " << p.second;
//	cout << endl;
//	pair<string, int>p2=make_pair("Tom", 20);
//	cout << "姓名： " << p.first << "年龄： " << p.second;
//}
//
//int main() {
//	test01();
//	
//	system("pause"); 
//	return 0;
//}

//set容器排序
//默认从小到大
// 
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) const {
//		return v1 > v2;
//	}
//};
//void test01() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(50);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	set<int, MyCompare>s2;
//
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(30);
//	s2.insert(20);
//	s2.insert(50);
//
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause"); 
//	return 0;
//}
//自定义排序

//class person {
//public:
//	person(string name, int age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//class compareperson {
//public:
//	bool operator()(const person&p1,const person&p2) const {
//		return p1.m_age > p2.m_age;
//	}
//};//仿函数
//void test01() {
//	set<person,compareperson>s;
//	person p1("liu", 30);
//	person p2("guan", 40);
//	person p3("zhang", 20);
//	person p4("zhao", 50);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<person,compareperson>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << "姓名： " << it->m_name << "年龄： " << it->m_age << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause"); 
//	return 0;
//}