#include "contact.hpp"

bool	Contact::isValidString(const std::string& input) {

	if (input.empty())
		return (false);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isalpha(input[i]) && input[i] != ' ')
			return (false);
	}
	return (true);
}

bool	Contact::isValidNumero(const std::string& numero) {
	if (numero.empty())
		return (false);
	size_t i = 0;
	if (numero[0] == '+')
		i = 1;
	for (; i < numero.length(); i++)
	{
		if (!std::isdigit(numero[i]))
			return (false);
    }
    return (true);
}

bool	Contact::isEmpty() const {
	return (this->first_name.empty() &&  this->last_name.empty() && this->nickname.empty());
}

std::string	Contact::trunque(std::string field) const {
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}
