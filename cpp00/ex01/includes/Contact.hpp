#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include "Contact.hpp"

class Contact {
public:
	Contact(void);
	Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret, int id);
	Contact&	operator=(const Contact& other);
	Contact(Contact& other);
	~Contact(void);

	std::string	get_f_name(void) const;
	std::string	get_l_name(void) const;
	std::string	get_n_name(void) const;
	std::string	get_number(void) const;
	std::string	get_secret(void) const;
	void		change_id(int id);
	void		clean_users(void);
	void		update_user(std::string f_name ,std::string l_name, std::string n_name, std::string p_num, std::string d_sec, int id);

	int			get_id(void) const;
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	int _id;
};

#endif