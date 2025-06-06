#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

//void test01() {
//	negate<int>n;
//	cout << n(50) << endl;
//}
//
//void test02() {
//	plus<int>p;
//	cout << p(10, 20);
//
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//void test() {
//    vector<int> v = { 10, 30, 20, 40, 50, 60, 5 };
//
//    // 使用内建关系仿函数 greater<int> 进行排序（降序）
//    sort(v.begin(), v.end(), greater<int>());
//
//    // 输出排序后的结果
//    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test();
//    return 0;
//}

//void test01() {
//    vector<bool>v;
//    v.push_back(true);
//    v.push_back(true);
//    v.push_back(false);
//    v.push_back(true);
//    v.push_back(false);
//
//    for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it <<" ";
//    }
//    cout << endl;
//
//    vector<bool>v2;
//    v2.resize(v.size());
//
//    transform(v.begin(), v.end(),v2.begin(), logical_not<bool>());
//
//    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    return 0;
//}
