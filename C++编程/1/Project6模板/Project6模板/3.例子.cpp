#include<iostream>
using namespace std;
//数组排序
//规则 从大到小
//算法 选择
//测试 char 数组,int数组
//
//交换函数模板
//template<class T>
//void mySwap(T& a, T& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////排序算法
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//
//	}
//}
//
////打印数组的模板
//template<class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02() {
//	//测试int数组
//	int intArr[] = {7,5,3,9,2,4,6,8,1};
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}