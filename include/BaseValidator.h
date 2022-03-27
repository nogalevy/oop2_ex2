#pragma once

#include "BaseField.h"
#include "error_messages.h"

template <class T>
class BaseValidator
{
public:
	BaseValidator() {}
	virtual ~BaseValidator() = default;

	virtual bool validate(const T& answer) = 0;
	virtual std::string getErrorMsg() = 0;
};