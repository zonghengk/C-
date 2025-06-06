////自己的公用的数组类
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray {
public:
	// 有参构造函数
	MyArray(int capacity) {
		cout << "MyArray 有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	// 拷贝构造函数（深拷贝）
	MyArray(const MyArray& arr) {
		cout << "MyArray 拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	// 赋值运算符重载（深拷贝）
	MyArray& operator=(const MyArray& arr) {
		cout << "MyArray operator= 调用" << endl;

		// 自我赋值判断
		if (this == &arr) {
			return *this;
		}

		// 释放原有资源
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}

		// 拷贝新内容
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	// 尾插
	void Push_Back(const T& val) {
		if (this->m_Size >= this->m_Capacity) {
			cout << "数组已满，无法插入" << endl;
			return;
		}
		this->pAddress[this->m_Size++] = val;
	}

	// 尾删
	void Pop_Back() {
		if (this->m_Size == 0) {
			cout << "数组为空，无法删除" << endl;
			return;
		}
		this->m_Size--;
	}

	// 下标访问
	T& operator[](int index) {
		if (index < 0 || index >= m_Size) {
			throw out_of_range("Index out of range!");
		}
		return this->pAddress[index];
	}

	// 获取容量
	int getCapacity() const {
		return this->m_Capacity;
	}

	// 获取当前大小
	int getSize() const {
		return this->m_Size;
	}

	// 析构函数
	~MyArray() {
		cout << "MyArray 析构函数调用" << endl;
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}

private:
	T* pAddress;       // 指向堆区真实数组的指针
	int m_Capacity;    // 数组容量
	int m_Size;        // 当前大小
};




