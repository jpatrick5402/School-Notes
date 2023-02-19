#pragma once
#include <vector>
#include "Vigenere.h"

class MyText
{
	std::vector<std::string> words;
	Vigenere v;

public:
	MyText(std::string k);
	std::string encryptWord(char* token);
	std::string decryptWord(char* token);
	void FileCreate(std::string fileName);
	void DisplayText();
	int WordCount();
};