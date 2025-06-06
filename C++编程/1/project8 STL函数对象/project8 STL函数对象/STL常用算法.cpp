#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>

//void printElement(int val) {
//    cout << val << " ";
//}
//
//// 仿函数：打印每个元素
//class PrintElement {
//public:
//    void operator()(int val) {  // 重载()操作符，成为仿函数
//        cout << val << " ";
//    }
//};
//
//int main() {
//    vector<int> v = { 1, 2, 3, 4, 5 };
//
//    // 使用普通函数调用
//    cout << "使用普通函数打印元素：";
//    for_each(v.begin(), v.end(), printElement);  // 调用普通函数
//    cout << endl;
//
//    // 使用仿函数调用
//    cout << "使用仿函数打印元素：";
//    
//    for_each(v.begin(), v.end(), PrintElement());  // 调用仿函数
//    cout << endl;
//
//    return 0;
//}

//transform
//class Transform {
//public:
//	int operator()(int v) {
//		return v+1000;
//	}
//};
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint());
//}
//int main() {
//    test01();
//	system("pause");
//    return 0;
//}
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//void testFind() {
//	vector<int>v = { 1, 2, 3, 4, 5 };
//
//	vector<int>::iterator it = find(v.begin(), v.end(), 3);
//	if (it != v.end()) {
//		cout << "找到了： " << *it << endl;
//	}
//	else {
//		cout << "没找到！" << endl;
//	}
//}
//int main() {
//    testFind();
//	system("pause");
//    return 0;
//}

//find_if
//class Greater {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), Greater());
//	if (it != v.end()) {
//		cout << "找到" << *it << endl;
//
//	}
//	else {
//		cout << "没有找到" << endl;
//	}
//}
//int main() {
//    test01();
//	system("pause");
//    return 0;
//}

//void test01() {
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end()) {
//		cout << "未找到相邻重复元素 " << endl;
//	}
//	else {
//		cout << "找到相邻重复元素 " << endl;
//	}
//}
//int main() {
//    test01();
//	system("pause");
//    return 0;
//}

//void test01() {
//    vector<int> v;
//
//    // 向容器中添加有序数据
//    for (int i = 1; i <= 10; i++) {
//        v.push_back(i);  // 1, 2, ..., 10
//    }
//
//    // 使用 binary_search 查找元素
//    bool found = binary_search(v.begin(), v.end(), 5); // 查找是否有5
//
//    if (found) {
//        cout << "找到了数字5" << endl;
//    }
//    else {
//        cout << "没有找到数字5" << endl;
//    }
//
//    // 查找不存在的数字
//    if (binary_search(v.begin(), v.end(), 15)) {
//        cout << "找到了数字15" << endl;
//    }
//    else {
//        cout << "没有找到数字15" << endl;
//    }
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//count
//void test01() {
//
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40的元素个数： " << num << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}



// 一元谓词（仿函数）：判断是否大于5
//class GreaterThanFive {
//public:
//    bool operator()(int val) {
//        return val > 5;
//    }
//};
//
//void test01() {
//    vector<int> v;
//
//    for (int i = 0; i < 10; i++) {
//        v.push_back(i);  // 0 ~ 9
//    }
//
//    // 统计大于5的元素个数
//    int countResult = count_if(v.begin(), v.end(), GreaterThanFive());
//
//    cout << "大于5的数字有 " << countResult << " 个" << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}


//sort
//void myPrint(int val) {
//	cout << val << " ";
//}
//void test01() {
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	sort(v.begin(), v.end(),greater<int>());
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//void test01() {
//    vector<int> v;
//
//    for (int i = 0; i < 10; i++) {
//        v.push_back(i);
//    }
//
//    // 打印原始顺序
//    cout << "原始顺序：";
//    for (int i : v) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//    // 设置随机种子
//    srand(unsigned(time(0)));
//
//    // 打乱顺序
//    random_shuffle(v.begin(), v.end());
//
//    // 打印打乱后的顺序
//    cout << "打乱顺序后：";
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//void myPrint(int val) {
//	cout << val << " ";
//}
//
//void test01() {
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v1.size()+v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}


//void test01() {
//    vector<int> v = { 1, 2, 3, 4, 5 };
//
//    // 输出原始顺序
//    cout << "原始顺序：";
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    // 反转容器中的元素
//    reverse(v.begin(), v.end()); // 反转操作
//
//    // 输出反转后的顺序
//    cout << "反转后的顺序：";
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//copy算法

//void test01() {
//    vector<int> v1 = { 1, 2, 3, 4, 5 };   // 原始容器
//    vector<int> v2(5);  // 目标容器，预先分配好空间
//
//    // 使用 std::copy 将 v1 中的元素复制到 v2 中
//    copy(v1.begin(), v1.end(), v2.begin());
//
//    // 输出 v2 中的元素
//    cout << "v2 的元素：";
//    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}
// 
// //replace算法
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//
//	}
//};
//void test01() {
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(40);
//
//	cout << "替换前： " << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}

////replace_if
// 一元谓词：判断是否小于3
//class LessThanThree {
//public:
//    bool operator()(int val) {
//        return val < 3;
//    }
//};
//
//void test01() {
//    vector<int> v = { 1, 2, 3, 4, 5 };
//
//    // 替换小于3的元素为 100
//    replace_if(v.begin(), v.end(), LessThanThree(), 100);
//
//    // 输出替换后的结果
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//void test02() {
//    vector<int> v1 = { 1, 2, 3 };
//    vector<int> v2 = { 4, 5, 6 };
//
//    cout << "交换前：v1 = ";
//    for (int i : v1) cout << i << " ";
//    cout << ", v2 = ";
//    for (int i : v2) cout << i << " ";
//    cout << endl;
//
//    swap(v1, v2);  // 交换两个 vector 的内容
//
//    cout << "交换后：v1 = ";
//    for (int i : v1) cout << i << " ";
//    cout << ", v2 = ";
//    for (int i : v2) cout << i << " ";
//    cout << endl;
//}

//accumulate
//void test01() {
//	vector<int>v;
//
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total: " << total << endl;
//
//}

//算数生成算法fill
//void test01() {
//    vector<int> v(10); // 创建一个含有10个元素的vector，默认初始值是0
//
//    // 使用fill填充
//    fill(v.begin(), v.end(), 100); // 把v中的所有元素填成100
//
//    // 打印结果
//    for (int i : v) {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//常用集合算法set_intersection交集
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//
//	}
//};
//void test01() {
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int>vTarget;
//	vTarget.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator itEnd= set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, MyPrint());
//	cout << endl;
//}
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//set_union并集
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//
//	}
//};
//void test01() {
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int>vTarget;
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd= set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, MyPrint());
//	cout << endl;
//}
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//差集set_difference
class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";

	}
};
void test01() {
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	vTarget.resize(max(v1.size(),v2.size()));
	vector<int>::iterator itEnd= set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;
}
int main() {
    test01();
    system("pause");
    return 0;
}