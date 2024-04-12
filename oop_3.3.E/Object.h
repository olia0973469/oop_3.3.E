//////////////////////////////////////////////////////////////////////////////
// Object.h
// заголовний файл Ц визначенн€ класу
#pragma once
class Object
{
	static unsigned int count;
public:
	static unsigned int Count()
	{
		return count;
	}
	Object()
	{
		count++;
	}
	~Object()
	{
		count--;
	}
};
