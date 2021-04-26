
#include "vector.h"
vector::vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}

vector::~vector(void)
{
	if (beg != 0) delete[] beg;
	beg = 0;
}
vector::vector(int n)
{
	beg = new object * [n];
	cur = 0;
	size = n;
}
void vector::add(object* p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}
ostream& operator<<(ostream& out, const vector& v)
{
	if (v.size == 0) out << "empty" << endl;
	object** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->show();
		p++;
	}
	return out;
}