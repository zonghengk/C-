#include<fstream>
#include<string>
#include<iostream>
using namespace std;
//二进制方式读文件主要是利用流对象调用成员read
//函数圆形:istream&read(char*buffer,int len);
//参数解释:字符指针buffer指向内存中一段存储空间，len是读写的字节数
class person {
public:
	char m_Name[64];
	int m_Age;

};
void test01() {
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	person p;
	ifs.read((char*)&p, sizeof(person));

	cout << "姓名：" << p.m_Name << " 年龄: " << p.m_Age << endl;
	ifs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}