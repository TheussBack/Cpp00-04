#include "contact.hpp"

contact::contact()
{
	//std::cout << "contact class' been created" << std::endl;
	return;
}

contact::~contact()
{
	//std::cout << "contact class' been destroyed" << std::endl;
	return;
}

std::string contact::_print_str_10(std::string str) const //Pour un nom trop long
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void	contact::display_all() const
{
	if (_first_name.empty() || _last_name.empty() || _nickname.empty() || _phone_number.empty() || _darkest_secret.empty())
	{
		std::cout << "Incorrect contact assignement" << std::endl;
		return;
	}
	std::cout << "contact # ʚɞ: " << this->_index << std::endl; //Numero de contact
	std::cout << "first name 𓆟:" << this->_first_name << std::endl;
	std::cout << "last_name ✰: " << this->_last_name << std::endl;
	std::cout << "nickname ⟡: " << this->_nickname << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "darkest secret 𓅰: " << this->_darkest_secret << std::endl;
}

void	contact::display_info() const
{
	if (this->_first_name.empty() || this->_last_name.empty() || this->_nickname.empty())
		return;
	std::cout << '|' << std::setw(10) << this->_index;
	std::cout << '|' << std::setw(10) << _print_str_10(this->_first_name);
	std::cout << '|' << std::setw(10) << _print_str_10(this->_last_name);
	std::cout << '|' << std::setw(10) << _print_str_10(this->_nickname);
	std::cout << '|' << std::endl;
}

int	contact::set_contact_info(int index)
{
	this->_index = index;
	std::cout << "⋆｡°✩ 𝐏𝐥𝐞𝐚𝐬𝐞 𝐢𝐧𝐩𝐮𝐭 𝐲𝐨𝐮𝐫 𝐜𝐨𝐧𝐭𝐚𝐜𝐭'𝐬 𝐟𝐢𝐫𝐬𝐭 𝐧𝐚𝐦𝐞 ๋࣭⭑: ";
	std::cin >> this->_first_name;
	std::cout << "⋆˙⟡♡⟡⋆˙ 𝐏𝐥𝐞𝐚𝐬𝐞 𝐢𝐧𝐩𝐮𝐭 𝐲𝐨𝐮𝐫 𝐜𝐨𝐧𝐭𝐚𝐜𝐭'𝐬 𝐥𝐚𝐬𝐭 𝐧𝐚𝐦𝐞 ☆: ";
	std::cin >> this->_last_name;
	std::cout << "₊˚ʚᗢ₊˚✧ﾟ. 𝐏𝐥𝐞𝐚𝐬𝐞 𝐢𝐧𝐩𝐮𝐭 𝐲𝐨𝐮𝐫 𝐜𝐨𝐧𝐭𝐚𝐜𝐭'𝐬 𝐧𝐢𝐜𝐤𝐧𝐚𝐦𝐞 ❤︎: ";
	std::cin >> this->_nickname;
	std::cout << "⋆｡° ✮ 𝐏𝐥𝐞𝐚𝐬𝐞 𝐢𝐧𝐩𝐮𝐭 𝐲𝐨𝐮𝐫 𝐜𝐨𝐧𝐭𝐚𝐜𝐭'𝐬 𝐩𝐡𝐨𝐧𝐞 𝐧𝐮𝐦𝐛𝐞𝐫 ₊˚⊹꒷: ";
	//while pas bon on redemande
	std::cin >> this->_phone_number;
	while (_phone_number.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "⋆ ✮ 𝑶𝒏𝒍𝒚 𝒅𝒊𝒈𝒊𝒕 𝒂𝒓𝒆 𝒂𝒄𝒄𝒆𝒑𝒕𝒆𝒅 ₊˚" << std::endl;
		std::cout << "(っ◔◡◔)っ ♥ Retry ♥ : ";
		std::cin >> this->_phone_number;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "✧˖° 𝐖𝐡𝐚𝐭'𝐬 𝐡𝐢𝐬 𝐝𝐚𝐫𝐤𝐞𝐬𝐭 𝐬𝐞𝐜𝐫𝐞𝐭 ? ꕤ: ";
	std::getline(std::cin, _darkest_secret);
	std::cout << "✿>$ ";
	return (1);
}

