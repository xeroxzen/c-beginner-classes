#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Books{
	char Title[50];
	char Publisher[50];
	char Author[50];
	char Subject[100];
	int book_id;
};

int main()
{
	struct Books first_book;
	struct Books second_book;

	//First book details
	strcpy(first_book.Title, "Only Time Will Tell.");
	strcpy(first_book.Publisher, "MacMillan");
	strcpy(first_book.Author, "Jeffrey Archer");
	strcpy(first_book.Subject, "Fiction");
	first_book.book_id = 9780230760387;

	//Second Book Specifications;
	strcpy(second_book.Title, "C++ Notes For Professionals.");
	strcpy(second_book.Publisher, "Stackoverflow");
	strcpy(second_book.Author, "web@petercv.com");
	strcpy(second_book.Subject, "Programming");
	second_book.book_id = 157878953;

	//Output Content to the console
	cout <<"First Book Details. \n";

	cout<<"First Book Title: " << first_book.Title << endl;
	cout<<"First Book Publisher: " << first_book.Publisher << endl;
	cout<<"First Book Author: " << first_book.Author << endl;
	cout<<"First Book Subject: " << first_book.Subject << endl;
	cout<<"First Book ISBN: " << first_book.book_id << endl;

	//Output COntents of the second book to the console.
	cout << endl;
	cout <<"Second Book Details. \n";

	cout<<"Second Book Title: " << second_book.Title << endl;
	cout<<"Second Book Publisher: " <<second_book.Publisher << endl;
	cout<<"Second Book Author: " << second_book.Author << endl;
	cout<<"Second Book Subject: " << second_book.Subject << endl;
	cout<<"Second Book ISBN: " << second_book.book_id << endl;

	return 0;
}
