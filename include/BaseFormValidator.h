#pragma once

#include "utilities.h"

class BaseFormValidator {
public:
	BaseFormValidator() /* : m_valid(true)*/ {}
	~BaseFormValidator() = default;

	virtual bool validate()const = 0;
	virtual std::string getErrorMsg() = 0;

	//void setValid();
	//bool getIsValid();
private:
	//bool m_valid;
};