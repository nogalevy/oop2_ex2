#include "NoDigitValidator.h"

NoDigitValidator::NoDigitValidator()
{
}

bool NoDigitValidator::validate(BaseField field)const
{
	return isNoDigits(field.m_message);
}

bool NoDigitValidator::isNoDigits(std::string msg) const
{
	for (int i = 0; i < msg.size(); i++)
	{
		if (isdigit(msg[i])) return false;
	}
	return true;
}
