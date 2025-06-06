#include<iostream>
using namespace std;
#include<vector>

//void printvector(vector<int>&v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//
//	printvector(v1);
//	//通过区间形式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printvector(v2);
//
//	//n各element方式
//	vector<int>v3(10, 100);
//	printvector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printvector(v4);
//
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//赋值
//void printvector(vector<int>&v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printvector(v1);
//	vector<int>v2;
//	v2 = v1;
//	printvector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printvector(v3);
//
//	vector<int>v4;
//	v4.assign(10, 100);
//	printvector(v4);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//void printVectorInfo(vector<int>& v) {
//	cout << "元素个数（size）： " << v.size() << endl;
//	cout << "容器容量（capacity）： " << v.capacity() << endl;
//	cout << "是否为空（empty）： " << (v.empty() ? "是" : "否") << endl;
//	cout << endl;
//}
//
//void test01() {
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	printVectorInfo(v);  // 查看添加元素后的容量和大小
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
// 
//void printvector(vector<int>&v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	
//	printvector(v1);
//
//	v1.pop_back();
//	printvector(v1);
//
//	v1.insert(v1.begin(),2, 100);
//	printvector(v1);
//
//	v1.erase(v1.begin());
//	printvector(v1);
//
//	v1.erase(v1.begin()+2);
//	printvector(v1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//容器互换

//void printvector(vector<int>&v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i >0; i--) {
//		v2.push_back(i);
//	}
//	printvector(v2);
//
//	cout << "交换后 " << endl;
//	v1.swap(v2);
//	printvector(v1);
//	printvector(v2);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}