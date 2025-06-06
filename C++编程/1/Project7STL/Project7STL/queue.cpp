//#include<iostream>
//using namespace std;
//#include<queue>
//#include<algorithm>
//#include<string>
//
//class person {
//public:
//	person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//
//};
//void test01() {
//	queue<person>q;
//	person p1("li", 10);
//	person p2("Zi", 10);
//	person p3("hi", 10);
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	cout << "队列大小： " << q.size() << endl;
//	while (!q.empty()) {
//		cout << "对头元素--姓名： " << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
//
//		cout << "对尾元素--姓名： " << q.back().m_Name << "年龄： " << q.back().m_Age << endl;
//
//		q.pop();
//	}
//	cout << "队列大小： " << q.size() << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}