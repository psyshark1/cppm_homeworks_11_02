#pragma once
#include<iostream>

#ifdef LVR
#define LVR_API __declspec(dllexport)
#else
#define LVR_API __declspec(dllimport)
#endif // !LVR

class LVR_API Leaver
{
public:
	Leaver();
	~Leaver();
	void leave(std::string msg);
};