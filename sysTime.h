#pragma once
class sysTime
{
	double value;
	static double systemTime;
public:
	sysTime()
	{
		value = 0;
	}
	sysTime(double newTime) { value = newTime; }
	void setTime(double newTime) { value = newTime; }                 // ustawienie nowego czasu
	double getTime() const { return value; }                                // pobranie biezacego czasu
	static void setSystemTime(double newTime) { systemTime = newTime; }  // ustawienie nowego czasu systemowego
	static double getSystemTime() { return systemTime; }
	~sysTime(){}

};

