#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
private:
    std::string last_name;
    std::string first_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void		setContact();              // saisit les infos du contact
    void		displayContact() const;
    void		displayShort(int index) const;
    std::string	trunque(std::string field) const;
    bool		isEmpty() const ;
    bool		isValidString(const std::string& str);
    bool		isValidNumero(const std::string& numero);
} ;


#endif