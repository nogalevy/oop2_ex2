#pragma once

#include "utilities.h"
#include "error_messages.h"

class BaseFormValidator {
public:
	BaseFormValidator();
	virtual ~BaseFormValidator() = default;

	virtual bool validate() = 0;
	virtual std::string getErrorMsg() = 0;

	virtual void set2FieldValidity(const bool valid);
	virtual bool get2FieldValidity()const;
	virtual void refillFields() = 0;
private:
	bool m_isValid;
};