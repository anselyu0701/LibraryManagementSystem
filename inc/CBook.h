#include <iostream>

class CBook {
    private:
        std::string title;
        std::string author;
        std::string ISBN;
        std::string genre;
        bool status;
    public:
        CBook(const std::string& title = "", const std::string& author = "", const std::string& ISBN = "", const std::string& genre = "");
        CBook(const CBook& other);
        CBook(CBook&& other) noexcept;
        ~CBook();
        std::string getTitle();
        std::string getAuthor();
        std::string getISBN();
        std::string getGenre();
        void setTitle(std::string title);
        void setAuthor(std::string author);
        void setISBN(std::string ISBN);
        void setGenre(std::string genre);
        bool isAvailable();
        void borrowBook();
        void returnBook();
};