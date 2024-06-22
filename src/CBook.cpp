#include "CBook.h"

CBook::CBook(const std::string& title, const std::string& author, const std::string& ISBN, const std::string& genre)
    : title(title), author(author), ISBN(ISBN), genre(genre), status(true) {

}

CBook::~CBook() {
    
}

CBook::CBook(const CBook& other)
    : title(other.title), author(other.author), ISBN(other.ISBN), genre(other.genre), status(other.status) {

    }

CBook::CBook(CBook&& other) noexcept
: title(std::move(other.title)), author(std::move(other.author)), ISBN(std::move(other.ISBN)), 
      genre(std::move(other.genre)), status(other.status) {
    other.status = false; // Invalidate the moved object
}

std::string CBook::getTitle() {
    return title;
}

std::string CBook::getAuthor() {
    return author;
}

std::string CBook::getISBN() {
    return ISBN;
}

std::string CBook::getGenre() {
    return genre;
}

void CBook::setTitle(std::string title) {
    this->title = title;
}

void CBook::setAuthor(std::string author) {
    this->author = author;
}

void CBook::setISBN(std::string ISBN) {
    this->ISBN = ISBN;
}

void CBook::setGenre(std::string genre) {
    this->genre = genre;
}

bool CBook::isAvailable() {
    return status;
}

void CBook::borrowBook() {
    if (status) {
        status = false;
    }
}

void CBook::returnBook() {
    if (!status) {
        status = true;
    }
}