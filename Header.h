#pragma once
#include<iostream>
using namespace std;

template <class T>
class Matrix {
private:
	int row=0, column=0;
	T  **m ;
public:
	Matrix();
	void create();
	void input();
	~Matrix();
	void operator+( Matrix&);
	void operator-(Matrix&);
	void operator*( Matrix&);
	void displaymat(Matrix &a);
	void transmat(Matrix &a);
	void setrow(int r) { row = r; }
	int getrow() { return row; }
	void setcolumn(int c) { column = c; }
	int getcolumn() { return column; }
};