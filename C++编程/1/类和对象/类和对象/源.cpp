//封装
#include<iostream>
using namespace std;
#include<string>
//设计一个圆类，求他周长
//class代表一个类,类后面紧跟着的就是类名称
//#define PI 3.14
//class Circle {
//	//访问权限
//	//公共权限
//public:
//	//属性，半径
//	int m_r;
//	//行为
//	//获取元的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//	//属性
//};
//int main() {
//	//通过圆类，创建具体的圆
//	Circle cl;
//	//给原对象的属性进行赋值
//	cl.m_r = 10;
//	cout << "元的周长为： " << cl.calculateZC() << endl;
//	system("pause");
//	//类中的属性和行为 我们统一称成员
//	//属性 成员属性，成员变量
//	//行为 成员函数，成员方法
//
//}
//访问权限
//公共权限 public 成员 类内可以访问 类外可以访问
//保护权限 protected 成员 类内可以访问 类外不可以访问
//私有权限 private 成员 类内可以访问 类外不可以访问
//class Person {
//	//三成员
//	//公共
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//public:
//	void func(){
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//
//	}
//};
//int main() {
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰";//不可访问
//	//p1.m_Password = 123;
//	system("pause");
//	return 0;
//}

//struct和class的区别
//struct默认权限为公共
//class默认为私有
//class C1 {
//	int m_A;
//};//默认权限是私有
//struct C2 {
//	int m_B;//公共
//};
//int main() {
//	C1 c1;
//	//c1.m_A = 100;
//	C2 c2;
//	c2.m_B = 100;//可以访问
//	system("pause");
//	return 0;
//}

//成员属性设为私有
//1.可以自己控制写权限
//2.对于写可以检测数据有效性
//class Person {
//public:
//	void setName(string name) {
//		m_Name = name;
//	}
//	//获取姓名
//	string getName() {
//		return m_Name;
//	}
//	//获取年龄
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			cout << "年龄有错误" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	void setIdol(string idol) {
//		m_Idol = idol;
//	}
//private:
//	string m_Name;//姓名 可读可写
//
//	int m_Age=18;//年龄 只读 也可以写（0到150）
//	string m_Idol;//偶像 只写
//};
//int main() {
//	Person p;//姓名设置
//	p.setName("大山");
//	cout << "姓名 ： " << p.getName()<< endl;
//	//年龄
//	p.setAge(100);
//	cout << "年龄 ： " << p.getAge() << endl;
//	//偶像设置
//	p.setIdol("小明");
//	//cout << "偶像 ： " << p.setIdol() << endl;
//	system("pause");
//	return 0;
//}

//例子
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体面积和体积
//4.分比如利用全局函数和成员函数，判断两个立方体是否相等

//class cube {
//public:
//	//长（设置和获取）
//	void setL(int l) {
//		m_L = l;
//	}
//	int getL() {
//		return m_L;
//	}
//	//宽（设置和获取）
//	void setW(int w) {
//		m_W = w;
//	}
//	int getW() {
//		return m_W;
//	}
//	//高（设置和获取）
//	void setH(int h) {
//		m_H = h;
//	}
//	int getH() {
//		return m_H;
//	}
//	//获取立方体面积
//	int caculateS() {
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//	//获取立方体体积
//	int caculateV() {
//		return m_L * m_W * m_H;
//	}
//	//利用成员函数判断两个立方体是否相等
//	bool isSameByClass(cube&c) {
//		if (m_L == c.getL() && m_W == c.getL()&& m_H == c.getL()) {
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
////利用全局函数来判断两个立方体是否相等
//bool isSame(cube &c1, cube &c2) {
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
//		return true;
//	}
//	return false;
//}
//int main() {
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1的面积为： " << c1.caculateS() << endl;
//	cout << "c1的体积为： " << c1.caculateV() << endl;
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(111);
//	//利用全局函数判断
//	bool ret = isSame(c1, c2);
//	if (ret) {
//		cout << "c1和c2是相等的 " << endl;
//	}
//	else {
//		cout << "c1和c2是不相等的 " << endl;
//	}
//	//利用成员函数判断
//	ret = c1.isSameByClass(c2);
//	if (ret) {
//		cout << "成员函数c1和c2是相等的 " << endl;
//	}
//	else {
//		cout << "成员函数c1和c2是不相等的 " << endl;
//	}
//	ret = c1.isSameByClass(c2);
//	system("pause");
//	return 0;
//}

//对象的初始化和清理
//构造函数的分类和调用

//分类
//按照参数分类，无参构造（默认构造）和有参构造
//按照类型分类 普通构造 拷贝构造函数
//class Person {
//public:
//	Person() {
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	
//	Person(int a) {
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p) {
//		//将传入的人身上的属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝函数调用" << endl;
//	}
//public:
//	int age;
//};
//void test01() {
//	//括号法
//	Person p1;
//	Person p2(10);
//	Person p3(p2);
//}
//void test02() {
//	//显示法
//	Person p1;
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//隐式转换法
//	Person p4 = 10;
//	Person p5 = p4;
//}
//int main() {
//    test01();
//	test02();
//	system("pause");
//	return 0;
//}
//拷贝构函数调用时机
#include<iostream>
using namespace std;
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2,值传递的方式给函数参数传值
//3.值方式返回局部对象
//class person {
//public:
//	person() {
//		cout << "person默认构造函数调用" << endl;
//	}
//	person(int age) {
//		m_age = age;
//		cout << "person有参构造函数调用" << endl;
//	}
//	person(const person &p) {
//		m_age = p.m_age;
//		cout << "person拷贝构造函数调用" << endl;
//	}
//	~person() {
//		cout << "person析构函数调用" << endl;
//	}
//	int m_age;
//};
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	person p1(20);
//	person p2(p1);
//	cout << "p2年龄为 " << p2.m_age << endl;
//}
////2,值传递的方式给函数参数传值
//void dowork(person p) {
//
//}
//void test02() {
//	person p;
//	dowork(p);
//}
////3.值方式返回局部对象
//person dowork2() {
//	person p1;
//	return p1;
//}
//void test03() {
//	person p = dowork2();
//}
//int main() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}

//构造函数调用规则
//1.创建一个类，c++编译器会给每个类都添加至少3个函数
//默认构造(空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）
// 
//2.如果我们写了有参函数构造函数，编译器不在提供默认构造，依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不在提供其他普通构造函数了
//class person {
//public:
//	person() {
//		cout << "person的默认构造函数调用" << endl;
//	}
//	person(int age) {
//		cout << "person的有参构造函数调用" << endl;
//		m_age = age;
//	}
//	person(const person& p) {
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//	~person() {
//		cout << "person的析构函数调用" << endl;
//	}
//	int m_age;
//};
////void test01() {
////	person p;
////	p.m_age = 18;
////	person p2(p);
////	cout << "p2的年龄为： "<<p2.m_age << endl;
////}
//void test02() {
//	person p(28);
//	person p2(p);
//	cout << "p2的年龄为 " << p2.m_age << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//深拷贝与浅拷贝
//class person {
//public:
//	person() {
//		cout << "person的默认构造函数调用" << endl;
//	}
//	person(int age,int height) {
//		cout << "person的有参构造函数调用" << endl;
//		m_age = age;
//		m_height=new int(height);
//	}
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	person(const person& p) {
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;编译器默认实现的就是这行代码
//		//深拷贝操作
//		m_height = new int(*p.m_height);
//	}
//	
//	
//	~person() {
//		//析构代码,将堆区开辟的数据做释放操作
//		/*if (m_height != NULL) {
//			delete m_height;
//			m_height = NULL;
//		}*///堆区内存重复释放
//
//		cout << "person的析构函数调用" << endl;
//	}
//	int m_age;
//	int *m_height;
//};
//void test01()
//{
//	person p1(18,160);
//	cout << "p1的年龄为： " << p1.m_age <<" 身高为： " <<*p1.m_height<< endl;
//	person p2(p1);
//	cout << "p1的年龄为： " << p2.m_age << " 身高为： " <<*p2.m_height << endl;
//}
//int main() {
//	test01();
//	system("pause");
//}
// 
// 
//初始化列表
//class person {
//public:
//	//传统初始化
//	/*person(int a, int b, int c){
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//	//初始化列表初始化属性
//	/*person() :m_A(10), m_B(20), m_C(30) {
//
//	}*/
//	person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//void test01() {
//	//person p(10, 20, 30);
//	//person p;
//	person p(30, 20, 10);
//	cout << "m_A= " << p.m_A << endl;
//	cout << "m_A= " << p.m_B << endl;
//	cout << "m_A= " << p.m_C << endl;
//}
//int main() {
//    test01();
//	system("pause");
//	return 0;
//}

//类对象作为类成员
// 手机类
// 
//class phone {
//public:
//	phone(string pName) {
//		cout << "phone的构造函数调用" << endl;
//		m_pName = pName;
//	}
//	string m_pName;
//};
////人类
//class person {
//public:
//	person(string name, string pName):m_Name(name),m_Phone(pName) {
//		cout << "person的构造函数调用" << endl;
//	}
//	//姓名
//	string m_Name;
//	//手机
//	phone m_Phone;
//	~person() {
//		cout << "person的析构函数调用" << endl;
//	}
//};
//
////当其他类对象作为本类成员，构造是先构造类对象，再构造自身
//void test01() {
//	person p("张三", "iphone");
//	cout << p.m_Name << "拿着： " << p.m_Phone.m_pName << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//静态成员
//静态成员就是在成员变量和成员函数前加上挂案件字static,成为静态成员
//静态成员分为：
//1.静态成员变量
//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明类外初始化
//2.静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问成员变量

//变量
//class person {
//
//public:
//	//所有对象共享同一份数据
//	static int m_A;//类内声明
//	//静态变量也有访问权限的
//private:
//	static int m_B;
//};
//int person::m_A = 100;//类外初始化
//int person::m_A = 200;
//void test01() {
//	person p;
//	cout << p.m_A << endl;
//	person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
//void test02() {
//	//1.通过对象进行访问
//	person p;
//	cout << p.m_A << endl;
//	//2.通过类名进行访问
//	cout << person::m_A << endl;
//	//cout << person::m_B << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//函数
//class person {
//public:
//	static void func() {
//		m_A = 100;
//		//m_B = 200;//静态成员不可以访问非静态成员函数
//		cout << "static void func" << endl;
//	}
//	static int m_A;//静态成员变量
//	int m_B;
//};
//void test01() {
//	//1.通过对象访问
//	person p;
//	p.func();
//	//2.通过类名访问
//	person::func();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//c++对象模拟和this指针
//成员变量和成员函数分开存储
//在C++中，类内成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象
//
//class person {
//public:
//	int m_A;//非静态成员属于类的对象上
//	static int m_B;//静态成员
//	void func();//非静态函数和变量分开,不属于
//	static void func1();//静态成员函数
//};
//int person::m_B = 0;
//
//void test01() {
//	person p;
//	//空对象占用内存
//	//c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的地址
//	cout << "size of p=" << sizeof(p) << endl;
//}
//void test02() {
//	person p;
//	cout << "size of p= " << sizeof(p) << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//this指针
//解决名称冲突
//返回对象本身用*this
//class person {
//public:
//	person(int age) {
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//	}
//	person& personaddage(person& p) {
//		this->age += p.age;
//		//this指向p2的指针，而*this只想的就是p2这个对象的本身
//		return *this;
//	}
//	int age;
//};
////1.解决名称冲突
//void test01() {
//	person p1(18);
//	cout << "p1的年龄为" << p1.age << endl;
//}
////2.返回对象本身用*this
//void test02() {
//	person p1(10);
//	person p2(10);
//	p2.personaddage(p1).personaddage(p1).personaddage(p1).personaddage(p1);//链式编程
//	cout << "p2的年龄为" << p2.age << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


//const修饰成员函数
//常函数
//class person {
//public:
//	void showperson() const {//相当于const person*const this连值都不可以修改{
//		this->m_B = 100;
//		
//		//this->m_A = 100;
//		//this = NULL;//this指针不可以修改指针的指向的
//	}
//	int m_A;
//	mutable int m_B;//特殊变量在长函数中也可以修改这个值
//};
//void test01() {
//	person p;
//	p.showperson();
//
//}
//void test02() {
//	const person p;
//	//p.m_A = 100;
//	p.m_B = 100;
//	//常对象只能调用常函数，常函数也一样
//	p.showperson();
//}
//int main() {
//
//	system("pause");
//	return 0;
//}

////友元
////全局函数函数做友元
//class building {
//	friend void goodgay(building* Building);//可以访问building中的私有成员
//public:
//	building() {
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	string m_sittingroom;//客厅
//private:
//	string m_bedroom;
//};
////全局函数
//void goodgay(building*Building) {
//	cout << "好基友全局函数正在访问: " << Building->m_sittingroom << endl;
//	cout << "好基友全局函数正在访问: " << Building->m_bedroom << endl;
//}
//void test01() {
//	building Building;
//	goodgay(&Building);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//友元类
//class Building;
//class goodgay {
//public:
//	goodgay();
//	void visit();//参观函数访问building中的属性
//	Building* building;
//};
//class Building {
//public:
//	Building();
//public:
//	string m_sittingroom;//客厅
//private:
//	string m_bedroom;//卧室
//};
//goodgay::goodgay() {
//	//创建建筑物的对象
//	building = new Building;
//}
////类外写成员函数
//Building::Building() {
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//
//void goodgay::visit() {
//	cout << "好基友正在访问： " << building->m_sittingroom << endl;
//}
//
//void test01() {
//	goodgay gg;
//	gg.visit();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//成员函数做友元
//class Building;
//class  goodgay {
//public:
//	goodgay();
//	void visit();
//	void visit2();
//	Building* building;
//};
//class Building {
//	friend void goodgay::visit();//告诉编译器可以访问私有成员
//public:Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////类外实现成员函数
//Building::Building() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//
//}
//goodgay::goodgay() {
//	building = new Building;
//}
//void goodgay::visit() {
//	cout << "visit函数正在访问： " << building->m_SittingRoom << endl;
//	cout << "visit函数正在访问： " << building->m_BedRoom << endl;
//}
//void goodgay::visit2() {
//	cout << "visit函数正在访问： " << building->m_SittingRoom << endl;
//	//cout << "visit函数正在访问： " << building->m_BedRoom << endl;
//}
//void test01() {
//	goodgay gg;
//	gg.visit();
//	gg.visit2();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//运算符重载
//运算符重载概念：对已有的运算符重新进行定义，赋予其另一种职能，以适应不同的数据类型
//加号运算符重载
//1.成员函数重载+号
//2.全局函数重载+号
//class person {
//public:
//	int m_A;
//	int m_B;
//	//person operator+(person& p) {//成员
//	//	person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//};
////2.全局函数重载+号
//person operator+(person& p1, person& p2) {
//	person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//void test01() {
//	person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//person p3 = p1.operator+(p2);//成员函数调用
//	//person p3 = operator+(p1, p2);//全局函数调用
//	person p3 = p1 + p2;//运算符重载，也可以发生函数重载
//	cout << "p3.m_A=" << p3.m_A << endl;
//	cout << "p3.m_B=" << p3.m_B << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//左符运算重载
//class person {
//public:
//	//利用成员函数重载 左移运算符p.operatoe<<(cout) 简化版本p<<cout
//	//不会利用成员函数重载<<运算符,因为无法实现cout在左侧
//	/*void operator<<(person& p) {
//
//	}*/
//	int m_A;
//	int m_B;
//
//};
////只能利用全局函数重载左移运算符
//ostream &operator<<(ostream &cout,person p) {//本质operator<<(cout,p)简化cout<<p
//	cout << "m_A= " << p.m_A << "m_B= " << p.m_B;
//	return cout;
//}
//void test01() {
//	person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	cout << p;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//重载递增运算符
//自定义整形
//class myinteger {
//	friend ostream& operator<<(ostream& cout, myinteger myint);
//public:
//	myinteger() {
//		m_Num = 0;
//	}
//	//重载前置++运算符
//	myinteger& operator++() {
//		m_Num++;
//		return *this;
//}
//	//重载后置++运算符
//	myinteger& operator++(int) {//int代表占位参数，可以用于区分求前置和后置递增
//		
//		//先记录结果
//		myinteger temp = *this;
//
//		//后递增 
//		m_Num++;
//		return temp;
//		
//	}
//private:
//	int m_Num;
//
//};
////重载运算符<<
//ostream& operator<<(ostream& cout, myinteger myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//void test01() {
//	myinteger myint;
//	cout << ++myint << endl;
//	cout << myint << endl;
//}
//void test02() {
//	myinteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//赋值运算符重载
//class person {
//public:
//	person(int age) {
//		m_age = new int(age);
//	}
//	~person() {
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	//重载赋值运算
//	person &operator=(person& p) {
//		//先判断是否有属性在堆区，如果有，先释放干净，然后再深拷贝
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//		//深拷贝
//		m_age=new int(*p.m_age);
//		return *this;
//	}
//	int* m_age;
//};
//void test01() {
//	person p1(18);
//	person p2(20);
//	person p3(30);
//	p3 = p2 = p1;
//	cout << "p1的年龄为 " << *p1.m_age << endl;
//	cout << "p2的年龄为 " << *p2.m_age << endl;
//	
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
// 
//关系运算符重载，可以让两个自定义类型对象进行对比操作
//class person {
//public:
//	person(string name, int age) {
//		m_Name = name;
//		m_age = age;
//	}
//	//重载==号
//	bool operator==(person& p) {
//		if (this->m_Name == p.m_Name && this->m_age == p.m_age) {
//			return true;
//
//		}
//		return false;
//	}
//	string m_Name;
//	int m_age;
//};
//void test01() {
//	person p1("Tom", 18);
//	person p2("Tom", 18);
//	if (p1 == p2) {
//		cout << "p1和p2是相等的！ " << endl;
//	}
//	else {
//		cout << "p1和p2是不相等的！ " << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//函数调用运算符重载
//打印输出类
//class Myprint {
//public:
//	//重载函数调用运算符
//	void operator()(string test) {
//		cout << test << endl;
//	}
//};
//void Myprint02(string test) {
//	cout << test << endl;
//}
//void test01() {
//	Myprint myprint;
//	myprint("hello world");//由于使用非常类似与函数调用，因此成为仿函数
//	Myprint02("hello world");//
//}
////仿函数非常灵活，没有固定写法
////加法类
//class add {
//public:
//	int operator()(int num1, int num2) {
//		return num1 + num2;
//	}
//
//};
//void test02() {
//	add myadd;
//	int ret = myadd(100, 100);
//	cout << "ret= " << ret << endl;
//	//匿名函数对象
//	cout << add()(100, 100) << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//继承
//继承是面向对象三大特性之一
// //好处，减少重复代码
// 语法：class子类：继承方式 父类
// 子类也成为派生类 父类                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       也成为基类
//java
//class Basepage {
//public:
//	void header() {
//		cout << "首页。。。。。 " << endl;
//	}
//	void footer() {
//		cout << "帮助。。。。。 " << endl;
//	}
//	void left() {
//		cout << "Java,Python,CPP。。。。。 " << endl;
//	}
//
//};
////java页面
//class Java :public Basepage {
//public:
//	void content() {
//		cout << "java视频 " << endl;
//	}
//};
////Python
//class Python :public Basepage {
//public:
//	void content() {
//		cout << "Python视频 " << endl;
//	}
//};
////CPP
//class CPP :public Basepage {
//public:
//	void content() {
//		cout << "CPP视频 " << endl;
//	}
//};
//void test01() {
//	cout << "Java视频如下 " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//继承方式
//#include <iostream>
//
//using namespace std;
//
//// 基类
//class Base {
//public:
//    int a = 1;
//protected:
//    int b = 2;
//private:
//    int c = 3;
//};
//
//// Public 继承
//class PublicDerived : public Base {
//public:
//    void show() { cout << "Public: " << a << " " << b << endl; }
//};
//
//// Protected 继承
//class ProtectedDerived : protected Base {
//public:
//    void show() { cout << "Protected: " << a << " " << b << endl; }
//};
//
//// Private 继承
//class PrivateDerived : private Base {
//public:
//    void show() { cout << "Private: " << a << " " << b << endl; }
//};
//
//int main() {
//    PublicDerived pub;
//    pub.show();
//    cout << pub.a << endl; // 可访问
//
//    ProtectedDerived prot;
//    prot.show(); // 但无法通过对象访问 `a`
//
//    PrivateDerived priv;
//    priv.show(); // `a` 变为私有
//
//    return 0;
//}

//继承中的对象模型
//class base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son :public base {
//public:
//	int m_D;
//};
//
////利用开发人员提示工具，跳转盘符D:
////跳转文件路径cd
////查看cl /d1 reportSingleClassLayout 源.cpp
//void test01() {
//	cout << "sizeof Son= " << sizeof(Son) << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//继承中构造和析构顺序
//#include <iostream>
//
//using namespace std;
//
//// 基类
//class Base {
//public:
//    Base() { cout << "Base 构造函数" << endl; }
//    ~Base() { cout << "Base 析构函数" << endl; }
//};
//
//// 派生类
//class Derived : public Base {
//public:
//    Derived() { cout << "Derived 构造函数" << endl; }
//    ~Derived() { cout << "Derived 析构函数" << endl; }
//};
//
//int main() {
//    cout << "创建 Derived 对象" << endl;
//    Derived obj;
//    cout << "对象创建完成" << endl;
//    return 0;
//}
//同名成员和函数处理
// 基类
//class Base {
//public:
//    int value = 10;
//    Base() { cout << "Base 构造函数" << endl; }
//    ~Base() { cout << "Base 析构函数" << endl; }
//    void display() { cout << "Base 中的 display()" << endl; }
//};
//
//// 派生类
//class Derived : public Base {
//public:
//    int value = 20; // 与基类成员同名
//    Derived() { cout << "Derived 构造函数" << endl; }
//    ~Derived() { cout << "Derived 析构函数" << endl; }
//    void show() {
//        cout << "Derived 中的 value: " << value << endl;
//        cout << "Base 中的 value: " << Base::value << endl;
//    }
//    void display() { cout << "Derived 中的 display()" << endl; }
//};
//
//int main() {
//    cout << "创建 Derived 对象" << endl;
//    Derived obj;
//    cout << "对象创建完成" << endl;
//    obj.show();
//    obj.display();
//    obj.Base::display(); // 访问基类的同名函数
//    return 0;
//}

//继承同名静态函数处理
//class Base {
//public:
//	static void func() {
//		cout << "base-static void func()" << endl;
//	}
//	static void func(int a) {
//		cout << "base-static void func(int a)" << endl;
//	}
//	static int m_a;
//
//};
//int Base::m_a = 100;
//class son :public Base {
//public:
//	static void func() {
//		cout << "son-static void func()" << endl;
//	}
//	static int m_a;
//};
//int son::m_a = 200;
////同名静态成员属性
//void test01() {
//	//通过对象访问
//	cout << "通过对象访问 " << endl;
//	son s;
//	cout << "son 下m_a= " << s.m_a << endl;
//	cout << "Base 下m_a= " << s.Base::m_a << endl;
//	//通过类名访问
//	cout << "通过类名访问 " << endl;
//	cout << "son 下m_a= " << son::m_a << endl;
//	cout << "Base 下m_a= " <<son::Base::m_a << endl;
//}
////同名成员函数
//void test02() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	son s;
//	s.func();
//	s.Base::func();
//	cout << "通过类型访问： " << endl;
//	son::func();
//	son::Base::func(100);
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//多继承语法
//c++允许一个类继承多个类
//语法：class 子类：继承方式 父类1，继承方式 父类2
//多继承可能会引发父类中有同名成员的出现，需要加作用域区分
//class Base1 {
//public:
//	Base1() {
//		m_A=100;
//
//	}
//	int m_A;
//};
//class Base2 {
//public:
//	Base2() {
//		m_B = 200;
//
//	}
//	int m_B;
//};
//class son :public Base1, public Base2 {
//public:
//	son() {
//		int m_C = 300;
//		int m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//void test01() {
//	son s;
//	cout << "sizeof son= " << sizeof(s) << endl;
//	cout << "m_A= " << s.Base1::m_A << endl;
//}
//int main() {
//	test01();
//	
//	system("pause");
//	return 0;
//}
//菱形继承
//概念：两个派生类继承同一个基类
//又有某个类同时继承者两个派生类
//这种继承被称为菱形继承或者钻石继承
//class animal {
//public:
//	int m_age;
//};
////利用虚继承可以解决菱形继承问题
////继承之前加上关键字 virtual变为虚继承
////animal类成为虚基类
//class sheep :virtual public animal{};
//class Tuo:virtual public animal{};
//class sheepTuo :public sheep, public Tuo{};
//
//void test01() {
//	sheepTuo st;
//	st.sheep::m_age = 18;
//	st.Tuo::m_age = 28;
//	//当菱形继承，两个父类拥有相同的数据，需要加以作用域区分
//	cout << "st.sheep::m_age= " << st.sheep::m_age << endl;
//	cout << "st.Tuo::m_age= " << st.Tuo::m_age << endl;
//	cout << "st.m_age= " << st.m_age << endl;
//}
//int main() {
//	test01();
//	
//	system("pause");
//	return 0;
//}

//多态
//多态是C++面向对象的三大特性之一
//多态分为两类
//静态多态：函数重载和运算符重载属于静态多态，复用函数名
//动态多态：派生类和虚函数实现运行时多态
//静态多态和动态多态的区别;
//静态多态的函数地址早绑定-编译阶段确定函数地址
//动态多态的函数地址晚绑定-运行阶段确定函数地址
//class animal {
//public:
//	//虚函数
//	virtual void speak() {
//		cout << "动物在说话 " << endl;
//	}
//};
//
////猫类
//class cat :public animal {
//public:
//	//重写 函数返回值类型 函数名 参数列表 完全相同
//	void speak() {
//		cout << "小猫在说话 " << endl;
//	}
//};
////狗
//class dog :public animal {
//public:
//	void speak() {
//		cout << "小狗在说话 " << endl;
//	}
//};
////执行说话的函数
////地址早绑定，在编译阶段确定函数地址
////如果像执行猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段惊醒绑定，地址晚绑定
////
////动态多态满足条件
////1.有继承关系
////2.子类重写父类的虚函数
////
////动态多态使用
////父类的指针或者引用，指向与类对象
//void dospeak(animal& animal1) {
//	animal1.speak();
//}
//void test01() {
//	cat cat1;
//	dog dog1;
//	dospeak(cat1);
//	dospeak(dog1);
//}
//void test02() {
//	cout << "sizeof animal= " << sizeof(animal) << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//多态例子，计算器类
//class Caculator {
//public:
//	int getResult(string oper) {
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//         }
//	     else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		 }
//		//如果像扩展新的功能，需要修改源码
//		//在真实开发中提倡开闭原则
//		//开闭原则：对扩展进行开发，对修改进行关闭
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
////利用多态实现计算器
//// 多态好处：
//// 组织结构清晰
//// 可读性强
//// 对于前期和后期扩展以及维护性高
////实现计算器抽象类
//class AbstractCaculator {
//public:
//	virtual int getResult() {
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//class AddCaculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
//class SubCaculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
//class MulCaculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//void test01() {
//	//创建计算器对象
//	Caculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//}
//void test02() {
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//	AbstractCaculator* abc = new AddCaculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//
//	//用完记得销毁
//	delete abc;
//	//减法
//	abc = new SubCaculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	//乘法
//	abc = new MulCaculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
// 
//纯虚函数和抽象类
//在多态中，通常父类中的虚函数的实现是无异议的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//纯虚函数语法：virtual 返回值类型 函数名（参数列表）=0；
//当类中有了纯虚函数，否则也属于抽象类
//抽象类特点
//1.无法实例化对象 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//class Base {
//public:
//	virtual void func() = 0;
//};
//class son :public Base {
//public:
//	virtual void func() {
//		cout << "func函数调用 " << endl;
//	};
//};
//void test01() {
//	//Base b;1.无法实例化对象
//	//new Base;同
//	//son s;//2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//	Base* base = new son;
//	base->func();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//多态案例2
//class AbstractDrinking {
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//制作饮品
//	void makeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//class Coffee :public AbstractDrinking {
//public:
//	//煮水
//	virtual void Boil() {
//		cout << "煮水" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入辅料" << endl;
//	}
//};
////制作茶叶
//class Tea :public AbstractDrinking {
//public:
//	//煮水
//	virtual void Boil() {
//		cout << "煮矿泉水" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡2" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "倒入杯中2" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入辅料2" << endl;
//	}
//};
////制作函数
//void dowork(AbstractDrinking* abs) {
//	abs->makeDrink();
//	delete abs;
//}
//void test01() {
//	dowork(new Coffee);
//	cout << "------------" << endl;
//	dowork(new Tea);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//虚析构和纯虚析构
//class Animal {
//public:
//	Animal() {
//		cout << "Animal构造函数调用" << endl;
//	}
//	/*virtual ~Animal() {
//		cout << "Animal析构函数调用" << endl;
//	}*/
//	virtual ~Animal() = 0;
//	virtual void speak() = 0;
//};
//Animal::~Animal() {
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//class cat :public Animal {
//public:
//	cat(string name) {
//		cout << "cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	~cat() {
//		if (m_Name != NULL) {
//			cout << "cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//void test01() {
//	Animal* animal = new cat("Tom");
//	animal->speak();
//	delete animal;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//多态例子3
class CPU {
public:
	virtual void caculate() = 0;

};
class VideoCard {
public:
	virtual void display() = 0;

};
class Memory {
public:
	virtual void storage() = 0;

};
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;

	}
	void work() {
		m_cpu->caculate();
		m_vc ->display();
		m_mem ->storage();
	}
	//提供析构函数，释放三个电脑零件
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};
class IntelCPU :public CPU {
public:
	virtual void caculate() {
		cout << "Intel的CPU开始工作" << endl;
	}
};
class IntelVideoCard :public VideoCard {
public:
	virtual void display() {
		cout << "Intel的显卡开始工作" << endl;
	}
};
class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel的存储开始工作" << endl;
	}
};
//联想
class LenovoCPU :public CPU {
public:
	virtual void caculate() {
		cout << "Lenovo的CPU开始工作" << endl;
	}
};
class LenovoVideoCard :public VideoCard {
public:
	virtual void display() {
		cout << "Lenovo的显卡开始工作" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo的存储开始工作" << endl;
	}
};
void test01() {
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//第一台
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "----------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	//第二台
	Computer* computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;
}
int main() {
	test01();
	system("pause");
	return 0;
}
