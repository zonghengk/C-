//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//class person {
//public:
//	person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//	vector<person>v;
//
//	person p1("aaa", 10);
//	person p2("bbb", 10);
//	person p3("ccc", 10);
//	person p4("ddd", 10);
//	person p5("eee", 10);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<person>::iterator it = v.begin(); it!=v.end(); it++) {
//		cout << "姓名： " << (*it).m_Name << "年龄： " << (*it).m_Age << endl;
//	}
//}
//
//void test02() {
//	vector<person* >v;
//
//	person p1("aaa", 10);
//	person p2("bbb", 10);
//	person p3("ccc", 10);
//	person p4("ddd", 10);
//	person p5("eee", 10);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "::姓名： " << (*it)->m_Name << "年龄： " << (*it)->m_Age << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}