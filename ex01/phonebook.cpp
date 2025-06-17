#include "phonebook.hpp"

void	PhoneBook::addContact()
{
	int index = contactCount % 8;
	contacts[index].setContact();
	contactCount++;
}

void	PhoneBook::searchContact()
{
	bool found = false;
	int	i = 0;

	while (i < 8)
	{
		if (!contacts[i].isEmpty())
		{
			contacts[i].displayShort(i);
			found = true;
		}
		i++;
	}
	if (!found)
	{
		std::cout << "Aucun contact trouvé !" << std::endl;
		return ;
	}
	std::cout << "Entrez un index (0-7) : ";
	std::string line;
	std::getline(std::cin, line);
	std::stringstream ss(line);
	int index;
	if (!(ss >> index) || !(ss.eof()) || index < 0 || index >= 8 || contacts[index].isEmpty())
	{
		std::cout << "Index invalide ou contact vide !" << std::endl;
		return;
	}
	contacts[index].displayContact();
}
