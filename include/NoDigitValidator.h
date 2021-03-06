#pragma once

#include "BaseValidator.h"
#include <string>

class NoDigitValidator : public BaseValidator<std::string> 
{
public:
	NoDigitValidator();
	virtual bool validate(const std::string& field);
	virtual std::string getErrorMsg();

private:
	bool isNoDigits(std::string msg)const;
};