#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val>5;
//	}
//};
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it= find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end()) {
//		cout << "未找到 " << endl;
//	}
//	else {
//		cout << "找到了大于5的数 " << *it << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//class myCompare {
//public:
//	bool operator()(int val1, int val2) {
//		return val1 > val2;
//	}
//};
//void test01() {
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(30);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end(), myCompare());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
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