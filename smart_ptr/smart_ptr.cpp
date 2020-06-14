#include <iostream>

template<typename T>
class MyPtr{
public:
	explicit MyPtr(T *p = nullptr);
	~MyPtr();
	T& operator *();
private:

	T *pdata;
};

template<typename T>
MyPtr<T>::MyPtr(T *p) {
	pdata = p;
}

template<typename T>
MyPtr<T>::~MyPtr() {
	std::cout << "delete" << std::endl;
	delete pdata;
}

template<typename T>
T& MyPtr<T>::operator *()
{
	return *pdata;

}

int main()
{
	MyPtr<char> Ptr = MyPtr(new char('a'));	
	std::cout << "Ptr = " << *Ptr << std::endl;
	return 0;
}
