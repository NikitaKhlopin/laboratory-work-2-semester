#pragma once
#include "Pair.h"
class LONG :public Pair
{
protected:
    int hi,low;
public:
    LONG();
    LONG(int, int, int, int);
    LONG operator=(const LONG&);
    LONG operator +(const LONG&);
    LONG operator *(const LONG&);
    LONG operator -(const LONG);
    friend ostream& operator<<(ostream& out, const LONG& other);
    friend istream& operator >>(istream& in,  LONG& other);
    void Show() override;
    void SetHi(double);
    void SetHi();
    void SetLow(double);
    void SetLow();
    int GetHi();
    int GetLow();
    ~LONG();
};

