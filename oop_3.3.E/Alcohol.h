//////////////////////////////////////////////////////////////////////////////
// Alcohol.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include "Liquid.h"
class Alcohol :public Liquid
{
private:
	double volume;
public:
	double getVolume() const { return volume; }
	void setVolume (double volume) { this->volume = volume; }
	void Init(string name, double density, double volume);
	void Display() const;
	void Read();
	Alcohol(const string name = "", const double density = 0, const double volume = 0);
	Alcohol(const Alcohol& s);
	Alcohol& operator<<(double newDensity);
	Alcohol & operator = (const Alcohol & s);
	friend ostream& operator << (ostream& out, const Alcohol& s);
	friend istream& operator >> (istream& in, Alcohol& s);
	operator string () const;
	~Alcohol(void);
};