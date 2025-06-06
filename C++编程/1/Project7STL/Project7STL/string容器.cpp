#include<iostream>
using namespace std;
#include<string>

//void test01() {
//	string s1;
//
//	const char *str = "hello world";
//	string s2(str);
//
//	cout << "s2= " << s2 << endl;
//	string s3(s2);
//	cout << "s3= " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4= " << s4 << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//
//	return 0;
//
//}

//赋值操作
//void test01() {
//	string str1;
//	str1 = "hello world";
//	cout << "str1= " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2= " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3= " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C");
//	cout << "str4= " << str4 << endl;
//
//	string str5;
//	str5.assign("hello C",5);
//	cout << "str5= " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6= " << str6 << endl;
//
//	string str7;
//	str7.assign(10,'w');
//	cout << "str7= " << str7 << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//string字符串拼接
//void test01() {
//	string str1 = "我";
//	str1 += "我爱玩游戏";
//	cout << "str1= " << str1 << endl;
//	str1 += ";";
//	cout << "str1= " << str1 << endl;
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str= " << str1 << endl;
//	
//	string str3 = "I";
//	str3.append(" love ");
//	cout << "str3= " << str3 << endl;
//
//	str3.append("game abcde",4);
//	cout << "str3= " << str3 << endl;
//
//	/*str3.append(str2);
//	cout << "str3= " << str3 << endl;*/
//
//	str3.append(str2,0,3);
//	cout << "str3= " << str3 << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//string查找和替换

//1.查找
//void test01() {
//
//	string str1 = "abcdefg";
//
//	int pos = str1.find("de");
//
//	cout << "pos= " << pos << endl;
//	
//}
//
//string s = "abcdefabc";
//
//int pos = s.find("c");          // 第一次出现的位置
//int last = s.rfind("c");        // 最后一次出现的位置
//int np = s.find("xyz");         // 如果找不到返回 string::npos
//
//
//string s = "I like apple";
//s.replace(7, 5, "banana");      // 替换从下标7开始的5个字符 → "I like banana"
//
//
//string a = "abc", b = "abd";
//
//if (a == b) {}                 // 是否相等
//if (a > b) {}                  // 字典序比较
//int res = a.compare(b);         // 返回 <0 表示 a<b，==0 表示相等，>0 表示 a>b
//
//
//string s = "hello world";
//string sub = s.substr(6);       // 从第6位开始到末尾 → "world"
//string sub2 = s.substr(0, 5);   // 从0开始的5个字符 → "hello"
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//string 字符存取
//void test01() {
//	string str = "hello";
//	/*cout << "str= " << str << endl;*/
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < str.size();i++)
//	{
//		cout << str.at(i) << " ";
//
//	}
//	cout << endl;
//	str[0] = 'x';
//	cout << "str= " << str << endl;
//	str.at(1) = 'x';
//	cout << "str= " << str << endl;
//}
////修改
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//删除
//erase   
//插入insert


//字串
//void test01() {
//	string str="abcdef";
//	string subStr = str.substr(1, 3);
//	cout << "subStr= " << subStr << endl;
//}