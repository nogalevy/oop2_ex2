#pragma once

#include <iostream>
#include <string>
#include <vector>

class BaseField {
public:
	BaseField(const std::string q);
	virtual ~BaseField() {};

	virtual void fillField() = 0;
	void setFieldValidity(const bool valid);
	bool getFieldValidity()const;

private:
	std::string m_question;
	bool m_isValid;
};