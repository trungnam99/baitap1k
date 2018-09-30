
#include<iostream>
using namespace std;
struct vector
{
	double dai, rong, cao;
};
vector operator +(vector X, vector Y)// operator da nang hoa toan tu
{
	vector Z;
	Z.dai = X.dai + Y.dai;
	Z.rong = X.rong + Y.rong;
	Z.cao = X.cao + Y.cao;
	return Z;
}
vector operator -(vector X, vector Y)
{
	vector Z;
	Z.dai = X.dai - Y.dai;
	Z.rong = X.rong - Y.rong;
	Z.cao = X.cao - Y.cao;
	return Z;
}
double operator *(vector X, vector Y)
{
	return X.dai*Y.dai + X.rong*Y.rong + X.cao*Y.cao;
}
istream &operator>>(istream &in, vector &X)
{
	cout << "dai= "; in >> X.dai;
	cout << "rong= "; in >> X.rong;
	cout << "cao= "; in >> X.cao;
	return in;
}
ostream &operator<<(ostream &out, vector X)
{
	out << "(" << X.dai <<"," << X.rong << "," << X.cao << ")";
	return out;
}
int main()
{
	vector X, Y, Z;
	cin >> X>>Y;
	cout << X + Y << endl << X - Y << endl<<X*Y  << endl;
}

