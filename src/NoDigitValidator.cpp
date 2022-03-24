#include "NoDigitValidator.h"

NoDigitValidator::NoDigitValidator()
{
}

bool NoDigitValidator::validate(std::string answer)const
{
	return isNoDigits(answer);
}

std::string NoDigitValidator::getErrorMsg()
{
	return NO_DIGIT_ERROR_MSG;
}

bool NoDigitValidator::isNoDigits(std::string msg) const
{
	for (int i = 0; i < msg.size(); i++)
	{
		if (isdigit(msg[i])) return false;
	}
	return true;
}
