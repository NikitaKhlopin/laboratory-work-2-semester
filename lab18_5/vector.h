#pragma once
#include"object.h"

#include<iostream>
using namespace std;
class vector
{
public: 
	vector(void);
	vector(int);
	~vector(void);
	void add(object *);
	friend ostream& operator<<(ostream& out, const vector&);
private:
	object** beg;
	int size;
	int cur;
};

