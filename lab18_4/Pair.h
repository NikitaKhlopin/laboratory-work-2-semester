#pragma once
#include <iostream>
using namespace std;

class Pair
{
protected:
	int first;
	int second;
public:
	
	virtual Pair operator +(const Pair&);
	virtual Pair operator -(const Pair&);
	Pair();
	virtual void Show();
	void Read();
	Pair(double R, double K);
	~Pair();
	int getFirst();
	int getSecond();
	void setFirst();
	void setSecond();
	virtual Pair operator=(const Pair&);
	friend istream& operator>>(istream& in, Pair& other);
	friend ostream& operator<<(ostream& out, const Pair& other);
};



