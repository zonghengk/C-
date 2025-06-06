#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	printList(l1);
//
//	list<int>l2(l1.begin(), l1.end());
//	printList(l2);
//
//	list<int>l3(l2);
//	printList(l3);
//
//	list<int>l4(10,1000);
//	printList(l4);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
// 
// 赋值
//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test03() {
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	list<int> L2;
//	L2.push_back(100);
//	L2.push_back(200);
//
//	cout << "初始 L1: ";
//	printList(L1);
//	cout << "初始 L2: ";
//	printList(L2);
//
//	// 赋值操作：L2 = L1
//	L2 = L1;
//	cout << "赋值后 L2: ";
//	printList(L2);
//
//	// 交换 L1 和 L2
//	L1.swap(L2);
//	cout << "交换后 L1: ";
//	printList(L1);
//	cout << "交换后 L2: ";
//	printList(L2);
//}
//
//int main() {
//	test03();
//	system("pause");
//	return 0;
//}
//大小操作
//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test04() {
//	list<int> L;
//
//	// 判断是否为空
//	if (L.empty()) {
//		cout << "L 是空的" << endl;
//	}
//
//	// 添加元素
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	cout << "添加元素后，L 的内容：";
//	printList(L);
//	cout << "L 的大小： " << L.size() << endl;
//
//	// 调整大小：扩大（会补默认值0）
//	L.resize(5);
//	cout << "resize(5) 后：";
//	printList(L);
//
//	// 缩小（会删除后面的元素）
//	L.resize(2);
//	cout << "resize(2) 后：";
//	printList(L);
//
//	// 清空
//	L.clear();
//	cout << "清空后，是否为空： " << (L.empty() ? "是" : "否") << endl;
//}
//
//int main() {
//	test04();
//	system("pause");
//	return 0;
//}

//插入删除操作
//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test05() {
//	list<int> L;
//
//	// 尾部插入
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	// 头部插入
//	L.push_front(100);
//	L.push_front(200);
//
//	cout << "插入元素后：";
//	printList(L);
//
//	// 删除头部和尾部元素
//	L.pop_front();
//	L.pop_back();
//
//	cout << "删除头尾后：";
//	printList(L);
//
//	// 插入到指定位置（在第二个位置插入999）
//	list<int>::iterator it = L.begin();
//	++it; // 指向第二个元素
//	L.insert(it, 999);
//
//	cout << "在第二个位置插入999后：";
//	printList(L);
//
//	// 删除指定位置元素
//	it = L.begin();
//	++it; // 指向刚才插入的999
//	L.erase(it);
//
//	cout << "删除第二个位置元素后：";
//	printList(L);
//
//	// 删除指定值（所有值为20的元素）
//	L.remove(20);
//
//	cout << "删除值为20的元素后：";
//	printList(L);
//}
//
//int main() {
//	test05();
//	system("pause");
//	return 0;
//}

//数据存取
//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//
//	cout << "第一个元素： " << l1.front() << endl;
//	cout << "最后一个元素： " << l1.back() << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//反转和排序

//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(30);
//	l1.push_back(50);
//	l1.push_back(40);
//
//	cout << "反转前： " << endl;
//	printList(l1);
//	l1.reverse();
//	cout << "反转后： " << endl;
//	printList(l1);
//}
//bool myCompare(int v1,int v2) {
//	return v1 > v2;
//}
//void test02() {
//	list<int>l1;
//	l1.push_back(20);
//	l1.push_back(10);
//	l1.push_back(30);
//	l1.push_back(50);
//	l1.push_back(40);
//
//	cout << "排序前： " << endl;
//	printList(l1);
//
//	l1.sort();
//	cout << "排序后： " << endl;
//	printList(l1);
//	l1.sort(myCompare);
//	cout << "排序后： " << endl;
//	printList(l1);
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}