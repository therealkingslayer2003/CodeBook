#pragma once
#include "Header.h"
#include "ErrorWarning.h"
#include "RangeWarning.h"
#include "LenArrayWarning.h"
template <typename T> class Container;
template <typename T> ostream& operator<<(ostream&, const Container<T>&);
template <typename T> istream& operator>>(istream&, Container<T>&);

template <typename T> class Container
{
protected:
	T* info;
	int size;
public:
	Container();
	Container(int);
	friend ostream& operator<< <>(ostream&, const Container<T>&);
	friend istream& operator>> <>(istream&, Container<T>&);
	~Container();
	int GetSize();
	T& operator[] (int);
};
template <typename T> Container<T>::Container() {
	info = nullptr;
	size = 0;
}
template <typename T> Container<T>::Container(int value) {
	if (value > 10) throw new LenArrayWarning(value);

	info = new T[value];
	size = value;
}
template <typename T> Container<T>::~Container() {
	delete[] info;
}
template <typename T> ostream& operator<<(ostream& output, const Container<T>& object) {
	if (object.info == nullptr) {
		output << "Список порожній" << endl;
	}
	else {
		for (int i = 0; i < object.size; i++) {
			output << object.info[i] << "  ";
		}
		output << endl;
	}
	return output;
}
template <typename T> istream& operator>>(istream& input, Container<T>& object) {
	for (int i = 0; i < object.size; i++) {
		input >> object.info[i]; cout << endl;
	}
	return input;
}
template <typename T> T& Container<T>::operator[] (int index) {
	if (index > size - 1 or index < 0) {
		throw new RangeWarning(index);
	}
	return info[index];
}
template <typename T> int Container<T>::GetSize() { return size; }

