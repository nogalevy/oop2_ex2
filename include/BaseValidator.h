#pragma once

#include "BaseField.h"
#include "error_messages.h"

template <class T>
class BaseValidator
{
public:
	BaseValidator() {}
	~BaseValidator() = default;

	virtual bool validate(T answer)const = 0;
	virtual std::string getErrorMsg() = 0;
private:
	//T m;
};