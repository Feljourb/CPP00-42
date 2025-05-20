#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int contactCount;
public:
    PhoneBook() {
        contactCount = 0;
    }
    void addContact();
    void searchContact();
} ;

// int main()
// {
// 	PhoneBook book;
// 	std::string command;

// 	while(true)
// 	{
// 		std::cout << "Entrer command: (ADD, SEARCH, EXIT): ";
// 		std::getline(std::cin, command);
// 		if (command == "ADD")
// 			book.addContact();
// 		else
// 			break;
//     }

// 	return (0);
// }

# endif