#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10,100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//赋值
//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty()) {
//		cout << "空" << endl;
//	}
//	else {
//		cout << "不空" << endl;
//		cout << "大小" <<d1.size()<< endl;
//	}
//	d1.resize(15,1);
//	printDeque(d1);
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//插入删除
//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	d1.pop_back();
//	d1.pop_front();
//
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//
//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test02() {
//	deque<int> d2;
//
//	// 插入元素
//	d2.push_back(10);
//	d2.push_back(20);
//	d2.push_back(30);
//	d2.push_back(40);
//	d2.push_back(50);
//
//	cout << "初始deque: ";
//	printDeque(d2);
//
//	// 删除中间一个元素（删除第三个元素：30）
//	d2.erase(d2.begin() + 2);
//	cout << "删除第三个元素后: ";
//	printDeque(d2);
//
//	// 在第二个位置插入两个100
//	d2.insert(d2.begin() + 1, 2, 100);
//	cout << "插入两个100后: ";
//	printDeque(d2);
//
//	// 清空deque
//	d2.clear();
//	cout << "清空后: ";
//	printDeque(d2);
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}

//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	d1.pop_back();
//	d1.pop_front();
//
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//	//访问
//	for (int i = 0; i < d1.size(); i++) {
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < d1.size(); i++) {
//		cout << d1.at(i) << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
// void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	printDeque(d);
//	//排序
//	sort(d.begin(), d.end());
//	cout << "排序后 " << endl;
//	printDeque(d);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

