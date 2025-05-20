#include "contact.hpp"

void Contact::setContact()
{
	do {
		std::cout << "First name: ";
		std::getline(std::cin, first_name);
	} while (!isValidString(first_name));

	do {
		std::cout << "Last name: ";
		std::getline(std::cin, last_name);
	} while (!isValidString(last_name));


	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
	} while (!isValidString(nickname));

	do {
		std::cout << "📞 Phone number: ";
		std::getline(std::cin, phone_number);
	} while (!isValidNumero(phone_number));

	std::cout << "🔐 Darket secret: ";
	std::getline(std::cin, darkest_secret);
}


void Contact::displayContact() const {
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darket secret: " << darkest_secret << std::endl;
}

void Contact::displayShort(int index) const {

	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << trunque(first_name) << "|";
	std::cout << std::setw(10) << trunque(last_name) << "|";
	std::cout << std::setw(10) << trunque(nickname) << "|" << std::endl;
}
