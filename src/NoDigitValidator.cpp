#include "NoDigitValidator.h"

NoDigitValidator::NoDigitValidator()
{
}

bool NoDigitValidator::validate(const std::string& answer)
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
