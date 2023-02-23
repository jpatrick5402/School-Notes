#include "Book.h"

Book::Book()
{
	std::cout << "Creating a new book" << std::endl;
	title = "";
	genre = "";
	typeBook = "";
	readingScore = 0;
}

Book::~Book()
{
	std::cout << "In the Book destructor" << std::endl;
}

void Book::setTitle(std::string myTitle)
{
	title = myTitle;
}
std::string Book::getTitle()
{
	return title;
}
void Book::setGenre(std::string myGenre)
{
	genre = myGenre;
}
std::string Book::getGenre()
{
	return genre;
}
void Book::setTypeBook(std::string myTypeBook)
{
	typeBook = myTypeBook;
}
std::string Book::getTypeBook()
{
	return typeBook;
}
void Book::setReadingScore(int myReadingScore)
{
	readingScore = myReadingScore;
}
int Book::getReadingScore()
{
	return readingScore;
}