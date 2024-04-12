//////////////////////////////////////////////////////////////////////////////
// Alcohol.cpp
// ���� ��������� � ��������� ������ �����
#include "Liquid.h"
#include "Alcohol.h"
#include <sstream>
void Alcohol::Init(string name, double density, double volume)
{
	Liquid::Init(name, density); // ������ �������� ������
	setVolume(volume);
}
void Alcohol::Display() const
{
	cout << endl;
	cout << "Liquid = " << endl;
	Liquid::Display(); // ������ �������� ������
	cout << "volume = " << volume << endl;
}
void Alcohol::Read()
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; cin >> name;
	cout << "density = "; cin >> density;
	double volume;
	cout << endl;
	cout << "volume = "; cin >> volume;
	Init(name, density, volume);
}
Alcohol::Alcohol(const string name, const double density, const double volume)
	: Liquid(name, density), volume(volume) // ������ �������� ������������
{}
Alcohol::Alcohol(const Alcohol& s)
	: Liquid(s) // ������ �������� ������������
{
	volume = s.volume;
}
Alcohol& Alcohol::operator<<(double newVolume)
{
	volume = newVolume;
	return *this;
}
Alcohol& Alcohol::operator = (const Alcohol& s)
{
	Liquid::operator = (s); // ������ �������� ���������
	volume = s.volume;
	return *this;
}
ostream & operator << (ostream & out, const Alcohol & s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Alcohol& s)
{
	string name;
	double density;
	cout << endl;
	cout << "name = "; in >> name;
	cout << "density = "; in >> density;
	s.setName(name);
	s.setDensity(density);
	double volume;
	cout << endl;
	cout << "volume = "; in >> volume;
	s.setVolume(volume);
	return in;
}
Alcohol::operator string () const
{
	stringstream ss;
	ss << "volume = " << volume << endl;
	return Liquid::operator string() + ss.str(); // ������ �������� ������
}
Alcohol::~Alcohol(void)
{}
