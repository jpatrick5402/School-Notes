#pragma once
#include <string>
#include <iostream>

class Book
{
	std::string title;
	std::string genre;
	std::string typeBook;
	int readingScore;
	
public:
	Book();
	~Book();
	void setTitle(std::string myTitle);
	std::string getTitle();
	void setGenre(std::string myGenre);
	std::string getGenre();
	void setTypeBook(std::string myTypeBook);
	std::string getTypeBook();
	void setReadingScore(int myReadingScore);
	int getReadingScore();
};