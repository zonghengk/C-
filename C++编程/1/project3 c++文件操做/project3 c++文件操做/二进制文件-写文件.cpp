//#include<fstream>
//#include<string>
//#include<iostream>
//using namespace std;
////二进制文件
////以二进制方式对文件进行读写操作
////打开方式指定为ios::binary
//
////写文件
////二进制方式写文件主要利用流对象调用函数成员函数write
////函数原型：ostream& write(const char*buffer,int len);
////参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
//
//class person {
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
//void test01() {
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//ofs.open("person.txt", ios::out | ios::binary);
//	person p = { "张三",18 };
//	ofs.write((const char*)&p,sizeof(p));
//	ofs.close();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}