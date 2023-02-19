#pragma once
#include <string>

class Vigenere
{
	std::string key;
public:
	Vigenere();
	Vigenere(std::string k);
	void setKey(std::string k);
	std::string getKey();
	std::string toUpperCase(std::string k);
	std::string encrypt(std::string w);
	std::string decrypt(std::string w);
};