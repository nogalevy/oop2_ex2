#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "utilities.h"

class BaseField {
public:
	BaseField(const std::string q);
	virtual ~BaseField() {};

	virtual void fillField() = 0;
	virtual bool validateField() = 0;
	void setFieldValidity(const bool valid);
	bool getFieldValidity()const;
	void printQuestion()const;
	virtual void printField(std::ostream& ostr) = 0;
private:
	std::string m_question;
	bool m_isValid;
};
