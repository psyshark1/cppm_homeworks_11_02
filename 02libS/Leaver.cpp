#include"Leaver.h"

Leaver::Leaver() {}
Leaver::~Leaver() {}
void Leaver::leave(std::string msg)
{
	std::cout << "До свидания, " << msg << std::endl;
}