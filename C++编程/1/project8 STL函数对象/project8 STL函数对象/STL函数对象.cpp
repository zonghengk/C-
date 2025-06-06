#include<iostream>
using namespace std;
#include<string>

//class MyAdd {
//public:
//	int operator()(int v1, int v2) {
//		return v1 + v2;
//	}
//};
//
//void test01() {
//	MyAdd myadd;
//	cout << myadd(10, 20) << endl;
//}
//
//class Myprint {
//public:
//	Myprint() {
//		this->count = 0;
//	}
//	void operator()(string test) {
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//内部自己状态
//};
//
//void test02() {
//	Myprint myprint;
//	myprint("hello world");
//	cout << "次数" << myprint.count << endl;
//}
//
//class doadd {
//public:
//	int operator()(int q1, int q2) {
//		return q1 + q2;
//	}
//};
//void useAdd(doadd add, int a, int b) {
//	int result = add(a, b);
//	cout << "结果是：" << result << endl;
//}
//void test03() {
//	doadd add;
//	useAdd(add, 10, 20);
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}