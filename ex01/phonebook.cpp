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
	int index;
	std::cin >> index ;
	// std::getline(std::cin, index);
	if (std::cin.fail() || index < 0 || index >= 8 || contacts[index].isEmpty())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Index invalid or contact empty !" << std::endl;
		return ;
	}
	contacts[index].displayContact();
}
