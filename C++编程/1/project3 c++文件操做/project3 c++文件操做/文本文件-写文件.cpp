//#include<iostream>
//using namespace std;
//#include<string>
//#include<fstream>
////1.1.文本文件
////1.1.1写文件
////步骤
////1.包含头文件 #include<fsream>
////2.创建流对象 ofstream ofs
////3.打开文件 ofs.open("文件路径打开方式")
////4.写数据   ofs<<"写入的数据"
////5.关闭文件 ofs.close();
////文件打开方式
////ios::为读文件而打开文件
////ios::out 为写文件而打开文件
////ios::ate 初始位置：文件尾
////ios::app 追加方式写文件
////ios::trunc 如果文件存在先删除，再创建
////ios::binary 二进制方式
////文件打开方式可以配合使用，利用|操作符
////如：ios::binary| ios::out;
//
//
//
//void test01() {
//	//1.包含头文件 fstream
//	//2.创建流对象
//	ofstream ofs;
//	//3.指定打开方式
//	ofs.open("test.txt",ios::out);
//	//4.写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "年龄：18" << endl;
//	ofs << "性别：男" << endl;
//	//5.关闭文件
//	ofs.close();
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}