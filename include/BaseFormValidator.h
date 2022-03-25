#pragma once

#include "utilities.h"

class BaseFormValidator {
public:
	BaseFormValidator() {}
	~BaseFormValidator() = default;

	virtual bool validate()const = 0;
	virtual std::string getErrorMsg() = 0;
private:
};