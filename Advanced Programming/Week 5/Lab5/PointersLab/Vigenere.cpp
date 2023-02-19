#include "Vigenere.h"

Vigenere::Vigenere()
{

}

Vigenere::Vigenere(std::string k)
{
	std::string upperkey = toUpperCase(k);
	key = upperkey;
}

void Vigenere::setKey(std::string k)
{
	key = k;
}

std::string Vigenere::getKey()
{
	return key;
}

std::string Vigenere::toUpperCase(std::string k)
{
	std::string upperString;
	for (char i : k)
	{
		char U = toupper(i);
		upperString.push_back(U);
	}
	return upperString;
}
// Per https://www.tutorialspoint.com/cplusplus-program-to-implement-the-vigenere-cypher
std::string Vigenere::encrypt(std::string w)
{
	std::string output;
	for (int i = 0, j = 0; i < w.length(); ++i) {
		char c = w[i];
		if (c >= 'a' && c <= 'z')
			c += 'A' - 'a';
		else if (c < 'A' || c > 'Z')
			continue;
		output += (c + key[j] - 2 * 'A') % 26 + 'A'; //added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
		j = (j + 1) % key.length();
	}
	return output;
}
// Per https://www.tutorialspoint.com/cplusplus-program-to-implement-the-vigenere-cypher
std::string Vigenere::decrypt(std::string w)
{
	std::string output;
	for (int i = 0, j = 0; i < w.length(); ++i) {
		char c = w[i];
		if (c >= 'a' && c <= 'z')
			c += 'A' - 'a';
		else if (c < 'A' || c > 'Z')
			continue;
		output += (c - key[j] + 26) % 26 + 'A';//added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
		j = (j + 1) % key.length();
	}
	return output;
}