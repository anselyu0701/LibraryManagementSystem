#include <iostream>
#include "CAdmin.h"
#include "CBook.h"
#include "CBorrowTransaction.h"
#include "CEmailNotification.h"
#include "CFine.h"
#include "CLibrarian.h"
#include "CLibrary.h"
#include "CLog.h"
#include "CMember.h"
#include "CReport.h"
#include "CReservation.h"
#include "CReturnTransaction.h"
#include "CSMSNotification.h"
#include "CUser.h"
#include "INotification.h"
#include "ITransaction.h"

int main() {
    // Create instances of CBook using different constructors
    CBook book1; // Default constructor
    CBook book2("Harry Potter", "J.K. Rowling", "9780545582889", "Fantasy"); // Parameterized constructor

    // Set attributes using setter methods (assuming CBook has setters defined)
    book1.setTitle("Lord of the Rings");
    book1.setAuthor("J.R.R. Tolkien");
    book1.setISBN("9780618640157");
    book1.setGenre("Fantasy");

    // Display book information using getter methods
    std::cout << "Book 1 Info:" << std::endl;
    std::cout << "Title: " << book1.getTitle() << std::endl;
    std::cout << "Author: " << book1.getAuthor() << std::endl;
    std::cout << "ISBN: " << book1.getISBN() << std::endl;
    std::cout << "Genre: " << book1.getGenre() << std::endl;
    std::cout << "Available: " << (book1.isAvailable() ? "Yes" : "No") << std::endl;

    std::cout << std::endl;

    std::cout << "Book 2 Info:" << std::endl;
    std::cout << "Title: " << book2.getTitle() << std::endl;
    std::cout << "Author: " << book2.getAuthor() << std::endl;
    std::cout << "ISBN: " << book2.getISBN() << std::endl;
    std::cout << "Genre: " << book2.getGenre() << std::endl;
    std::cout << "Available: " << (book2.isAvailable() ? "Yes" : "No") << std::endl;

    // Demonstrate borrowing and returning books
    std::cout << std::endl;
    std::cout << "Borrowing Book 1..." << std::endl;
    book1.borrowBook();
    std::cout << "Book 1 Available: " << (book1.isAvailable() ? "Yes" : "No") << std::endl;

    std::cout << "Returning Book 1..." << std::endl;
    book1.returnBook();
    std::cout << "Book 1 Available: " << (book1.isAvailable() ? "Yes" : "No") << std::endl;

    return 0;
}