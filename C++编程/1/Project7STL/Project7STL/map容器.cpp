#include<iostream>
using namespace std;
#include<map>
//void printMap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key= " << (*it).first << "value= " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01() {
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	printMap(m);
//	map<int, int>m2(m);
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m2);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//大小交换
#include <iostream>
#include <map>
using namespace std;

// 打印map的函数
//void printMap(map<int, int>& m) {
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//        cout << "key= " << it->first << " value= " << it->second << endl;
//    }
//    cout << endl;
//}
//
//void test01() {
//    // 创建两个map
//    map<int, int> m1;
//    map<int, int> m2;
//
//    // 给m1插入数据
//    m1.insert(pair<int, int>(1, 10));
//    m1.insert(pair<int, int>(2, 20));
//    m1.insert(pair<int, int>(3, 30));
//
//    // 给m2插入数据
//    m2.insert(pair<int, int>(4, 40));
//    m2.insert(pair<int, int>(5, 50));
//
//    // 打印m1
//    cout << "m1的内容：" << endl;
//    printMap(m1);
//
//    // 打印m2
//    cout << "m2的内容：" << endl;
//    printMap(m2);
//
//    // 输出大小
//    cout << "m1的大小: " << m1.size() << endl;
//    cout << "m2的大小: " << m2.size() << endl;
//
//    // 交换m1和m2
//    cout << "交换后：" << endl;
//    m1.swap(m2);
//
//    // 再次打印
//    cout << "m1的内容：" << endl;
//    printMap(m1);
//
//    cout << "m2的内容：" << endl;
//    printMap(m2);
//
//    // 再次输出大小
//    cout << "m1的大小: " << m1.size() << endl;
//    cout << "m2的大小: " << m2.size() << endl;
//}
//
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}


//// 打印map的函数
//void printMap(map<int, int>& m) {
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//        cout << "key= " << it->first << " value= " << it->second << endl;
//    }
//    cout << endl;
//}
//
//void test02() {
//    map<int, int> m;
//
//    // 插入数据（几种方式）
//    m.insert(pair<int, int>(1, 10));          // 方法一：用pair插入
//    m.insert(make_pair(2, 20));                // 方法二：用make_pair插入
//    m.insert(map<int, int>::value_type(3, 30)); // 方法三：用value_type插入
//    m[4] = 40;                                 // 方法四：用[]插入（如果key不存在，就插入）
//
//    cout << "插入后的map内容：" << endl;
//    printMap(m);
//
//    // 删除操作
//    m.erase(2);  // 按key删除key=2的元素
//    cout << "删除key=2后的map内容：" << endl;
//    printMap(m);
//
//    // 按迭代器删除
//    map<int, int>::iterator it = m.find(3); // 找到key=3
//    if (it != m.end()) {
//        m.erase(it);  // 按位置删除
//    }
//    cout << "删除key=3后的map内容：" << endl;
//    printMap(m);
//
//    // 清空整个map
//    m.clear();
//    cout << "清空后的map大小：" << m.size() << endl;
//}
//
//int main() {
//    test02();
//    system("pause");
//    return 0;
//}

//查找和统计

// 打印map的函数
//void printMap(map<int, int>& m) {
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//        cout << "key= " << it->first << " value= " << it->second << endl;
//    }
//    cout << endl;
//}
//
//void test03() {
//    map<int, int> m;
//
//    // 插入一些元素
//    m.insert(make_pair(1, 10));
//    m.insert(make_pair(2, 20));
//    m.insert(make_pair(3, 30));
//
//    cout << "当前map内容：" << endl;
//    printMap(m);
//
//    // 查找key=2
//    map<int, int>::iterator it = m.find(2);
//    if (it != m.end()) {
//        cout << "找到key=2, 对应的value是：" << it->second << endl;
//    }
//    else {
//        cout << "没找到key=2" << endl;
//    }
//
//    // 查找key=5
//    it = m.find(5);
//    if (it != m.end()) {
//        cout << "找到key=5, 对应的value是：" << it->second << endl;
//    }
//    else {
//        cout << "没找到key=5" << endl;
//    }
//
//    // 统计某个key出现的次数
//    cout << "key=2出现了 " << m.count(2) << " 次" << endl;
//    cout << "key=5出现了 " << m.count(5) << " 次" << endl;
//}
//
//int main() {
//    test03();
//    system("pause");
//    return 0;
//}

//默认排序

//void test01() {
//    map<int, int> m;
//    m.insert(make_pair(3, 300));
//    m.insert(make_pair(1, 100));
//    m.insert(make_pair(2, 200));
//
//    cout << "默认升序（key从小到大）：" << endl;
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//        cout << "key= " << it->first << " value= " << it->second << endl;
//    }
//    cout << endl;
//}
//int main() {
//    test01();
//    system("pause");
//    return 0;
//}

//仿函数

// 仿函数（排序规则）
//class MyCompare {
//public:
//    bool operator()(int v1, int v2) const {
//        return v1 > v2;  // 改成大于号，表示从大到小
//    }
//};
//
//void test02() {
//    map<int, int, MyCompare> m;  // 注意：这里指定了自己的排序规则
//    m.insert(make_pair(3, 300));
//    m.insert(make_pair(1, 100));
//    m.insert(make_pair(2, 200));
//
//    cout << "自定义降序（key从大到小）：" << endl;
//    for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
//        cout << "key= " << it->first << " value= " << it->second << endl;
//    }
//    cout << endl;
//}
//int main() {
//    test02();
//    system("pause");
//    return 0;
//}

