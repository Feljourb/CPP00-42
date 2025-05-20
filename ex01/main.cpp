#include "phonebook.hpp"
#include <algorithm>
#include <cctype>

std::string trim(const std::string &str)
{
	std::string::const_iterator start = str.begin();
	std::string::const_iterator end = str.end();
	while (start != str.end() && std::isspace(*start))
		++start;
	while (start != end && std::isspace(*(end - 1)))
		--end;
	return (std::string(start, end));
}

int main()
{
	PhoneBook	book;
	std::string	command;
	std::string cmd;

	while (true)
	{
		std::cout << "Entrer command: (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		cmd = trim(command);
		if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
			book.searchContact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "invalid command, try again .\n";
	}
	return (0);
}
