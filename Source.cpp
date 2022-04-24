#include<iostream>
#include"Header.h"
using namespace std;

template <class T>
Matrix<T>::Matrix() {
	row = 0;
	column = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			m[i][j] = 0;
}

template <class T>
void Matrix<T>::create() {
	cout << "enter the number of rows and columns\n";
	cin >> row >> column;
	m = new T * [row];
	for (int i = 0; i < row; i++)
		m[i] = new T[column];
}

template <class T>
void Matrix<T>::input(){
	cout << "enter the matrix \n";
	for(int i=0;i<row;i++){
		for (int j = 0; j < column; j++) {
			cin >> m[i][j];
		}
	}
}

template<class T>
void Matrix<T>::displaymat(Matrix &a) {
	for (int i = 0; i < row; i++) {
		cout << "\n";
		for (int j = 0; j < column; j++) {
			cout << m[i][j] << "  ";
		}
	}
	cout << endl;
}

template <class T>
Matrix<T>::~Matrix() {
	delete[]m;
}

template<class T>
void Matrix<T>:: operator+( Matrix<T> &a){
		for (int i = 0; i < a.row; i++)
			for (int j = 0; j < a.column; j++)
				a.m[i][j] = m[i][j] + a.m[i][j];
		cout << "addition output:";
		a.displaymat(a);
}

template<class T>
void Matrix<T>:: operator-(Matrix<T>& a) {
	for (int i = 0; i < a.row; i++)
		for (int j = 0; j < a.column; j++)
			a.m[i][j] = m[i][j] - a.m[i][j];
	cout << "subtraction output:";
	a.displaymat(a);
}


template<class T>
void Matrix <T>:: operator*(Matrix<T> &a)
{
	Matrix<T> c;
	c.row = a.row;
	c.column = a.column;
	c.m = new T * [c.row];
	for (int i = 0; i < c.row; i++)
		c.m[i] = new T[c.column];
	for (int i = 0; i < c.row; i++)
	{
		for (int j = 0; j < c.column; j++)
		{
			c.m[i][j] = 0;
		}
	}
	for (int i = 0; i < c.row; i++)
	{
		for (int j = 0; j < c.column; j++)
		{
			for (int l = 0; l < a.column; l++)
			{
				c.m[i][j] += m[i][l] * a.m[l][j];
			}
		}
	}
	cout << "multiplication output:" << endl;
	c.displaymat(c);
}


template<class T>
void Matrix<T>::transmat(Matrix &a) {
		a.input();
		Matrix b;
		b.row = a.column;
		b.column = a.row;
		b.m = new T * [b.row];
		for (int i = 0; i < b.row; i++)
			b.m[i] = new T[b.column];
		for (int i = 0; i < b.row; i++)
		{
			for (int j = 0; j < b.column; j++)
			{
				b.m[i][j] = 0;
			}
		}
		for (int i = 0; i < b.row; i++)
		{
			for (int j = 0; j < b.column; j++)
			{
				b.m[i][j] = a.m[j][i];
			}
		}
		cout << "transpose output:" << endl;
		b.displaymat(b);
}
