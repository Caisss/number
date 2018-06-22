#include"number.h"
int main()
{
	Number *p;
	double q, w;
	cin >> q>>w;
	RealNumber E = RealNumber(q).add(RealNumber(w));
	p = &E;
	(*p).print();
	IntegerNumber R = IntegerNumber(q).add(IntegerNumber(w));
	p = &R;
	(*p).print();
	complex<double> q2, w2;
	cin >> q2 >> w2;
	ComplexNumber T = ComplexNumber(q2).add(ComplexNumber(w2));
	p = &T;
	(*p).print();
	return 0;
}
