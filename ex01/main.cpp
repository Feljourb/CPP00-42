#include "phonebook.hpp"

int main()
{
	PhoneBook	book;
	std::string	command;

	while (true)
	{
		std::cout << "Entrer command: (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "invalid command, try again .\n";
	}
	return (0);
}
