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
////ios::in为读文件而打开文件
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
//	ifstream ifs;
//	//3.指定打开方式
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4.读数据
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}*/
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}*/
//	//第三种
//	//string buf;
//	//while (getline(ifs, buf)) {
//	//	cout << buf << endl;
//	//}
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//
//	//5.关闭文件
//	ifs.close();
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}