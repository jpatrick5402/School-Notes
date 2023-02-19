#include "MyText.h"

#include <iostream>
#include <fstream>

MyText::MyText(std::string k)
{
	v.setKey(k);
}
std::string MyText::encryptWord(char* token)
{
	std::string encrypted = v.encrypt(token);
	words.push_back(encrypted);
	FileCreate("Encrypted.txt");
	return encrypted;
}
std::string MyText::decryptWord(char* token)
{
	std::string decrypted = v.decrypt(token);
	words.push_back(decrypted);
	FileCreate("Decrypted.txt");
	return decrypted;
}
void MyText::FileCreate(std::string fileName)
{
	std::fstream outfile(fileName);
	for (std::string i : words)
		outfile << i;
	outfile.close();
}
void MyText::DisplayText()
{
	for (std::string i : words)
		std::cout << i << " ";
}
int MyText::WordCount()
{
	return words.size();
}