#pragma once

#include "BaseField.h"
#include "error_messages.h"

template <class T>
class BaseValidator
{
public:
	BaseValidator() {}
	~BaseValidator() = default;

	virtual bool validate(const T& answer) = 0; //Tali: do not put here const!! (on the outside)
	virtual std::string getErrorMsg() = 0;
private:
	//T m;
};