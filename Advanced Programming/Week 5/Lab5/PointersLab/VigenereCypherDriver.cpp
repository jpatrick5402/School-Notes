#include "Vigenere.h"
#include "MyText.h"

#include <iostream>
#include <fstream>

using namespace std;

int displayMenu();

int main()
{
	std::cout << "Joseph Patrick - Lab 5" << endl;
	while (true)
	{
		int choice = displayMenu();

		if (choice == 1)
		{
			// https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
			char file_contents[1000] = "";
			char str[1000];
			int i = 0;
			char myKey[100];
			char seps[] = " ,\t\n";
			char* token1 = NULL;
			char* token2 = NULL;
			char* next_token1 = NULL;
			char* next_token2 = NULL;
			string path;

			cout << "Enter the name of the file to encrypt: ";
			cin >> path;

			ifstream infile;
			infile.open(path);

			while (!infile.is_open())
			{
				cin.ignore();
				cin.clear();
				cout << "File not found" << '\n';
				cout << "Enter the name of the file to encrypt: ";
				cin >> path;
				infile.open(path);
			}

			while (!infile.eof())
			{
				infile.getline(str, 256);
				// https://www.digitalocean.com/community/tutorials/string-concatenation-in-c-plus-plus
				strncat_s(file_contents, str, 256);
			}

			cout << '\n' << file_contents << '\n' << '\n';

			MyText MyTextObject(file_contents);

			cout << "Enter a encryption/decryption key: ";
			cin >> myKey;

			// https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l?redirectedfrom=MSDN&view=msvc-170
			token1 = strtok_s(file_contents, seps, &next_token1);
			token2 = strtok_s(myKey, seps, &next_token2);

			while ((token1 != NULL) || (token2 != NULL))
			{
				// Get next token:
				if (token1 != NULL)
				{
					MyTextObject.encryptWord(token1);
					token1 = strtok_s(NULL, seps, &next_token1);
				}
				if (token2 != NULL)
				{
					token2 = strtok_s(NULL, seps, &next_token2);
				}
			}
		MyTextObject.DisplayText();
		MyTextObject.FileCreate("Encrypted.txt");
		infile.close();
		}
		else if (choice == 2)
		{
			// https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
			char file_contents[1000] = "";
			char str[1000];
			int i = 0;
			char myKey[100];
			char seps[] = " ,\t\n";
			char* token1 = NULL;
			char* token2 = NULL;
			char* next_token1 = NULL;
			char* next_token2 = NULL;
			string path;
			
			cout << "Enter the name of the file to decrypt: ";
			cin >> path;

			ifstream infile;
			infile.open(path);

			while (!infile.is_open())
			{
				cin.ignore();
				cin.clear();
				cout << "File not found" << '\n';
				cout << "Enter the name of the file to decrypt: ";
				cin >> path;
			}

			while (!infile.eof())
			{
				infile.getline(str, 256);
				// https://www.digitalocean.com/community/tutorials/string-concatenation-in-c-plus-plus
				strncat_s(file_contents, str, 256);
			}

			cout << '\n' << file_contents << '\n' << '\n';

			MyText MyTextObject(file_contents);

			cout << "Enter a encryption/decryption key: ";
			cin >> myKey;

			// https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l?redirectedfrom=MSDN&view=msvc-170
			token1 = strtok_s(file_contents, seps, &next_token1);
			token2 = strtok_s(myKey, seps, &next_token2);

			while ((token1 != NULL) || (token2 != NULL))
			{
				// Get next token:
				if (token1 != NULL)
				{
					MyTextObject.decryptWord(token1);
					token1 = strtok_s(NULL, seps, &next_token1);
				}
				if (token2 != NULL)
				{
					token2 = strtok_s(NULL, seps, &next_token2);
				}
			}
		MyTextObject.DisplayText();
		MyTextObject.FileCreate("Decrypted.txt");
		infile.close();
		}
		else if (choice == 3)
		{
			exit(0);
		}
	}
}

int displayMenu()
{
	string selection;
	cout << '\n';
	cout << "Vigenere Cypher" << '\n' << '\n';
	cout << "Main Menu" << '\n' << '\n';
	cout << "1 - Encrypt File" << '\n';
	cout << "2 - Decrypt File" << '\n';
	cout << "3 - Quit" << '\n';
	cout << '\n' << '\n';
	cout << "Selection: ";
	
	cin >> selection;

	while (selection != "1" && selection != "2" && selection != "3")
	{
		cin.ignore();
		cin.clear();
		cout << "Please enter a valid selection." << '\n';
		cout << "Selection: ";
		cin >> selection;
	}
	if (selection == "1")
		return 1;
	else if (selection == "2")
		return 2;
	else if (selection == "3")
		return 3;

	return -1;
}