#pragma once
#include<iostream>

#ifndef LVR
#define LVR_API __declspec(dllexport)
#else
#define LVR_API __declspec(dllimport)
#endif // !LVR

class Leaver
{
public:
	LVR_API Leaver();
	LVR_API ~Leaver();
	LVR_API void leave(std::string msg);
};