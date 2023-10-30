#pragma once
#include "Array.h"

class User
{
public:
	User();
	User(std::string username);
	User(std::string username, std::string email);
	User(std::string username, std::string email, std::string password);
	~User();
	void setID(int newID);
	void setUserName(std::string newName);
	void setEmail(std::string newEmail);
	void setPassword(std::string newPassword);
	void printUser();
	unsigned long getID() const;
	std::string getUserName() const;
	std::string getEmail() const;
	std::string getPassword() const;
private:
	std::string _username; // ����������� - 30 ������
	unsigned long _id = 0;
	std::string _email; // ����������� - 20 ������
	std::string _password; // ����������� - 20 ������
};
