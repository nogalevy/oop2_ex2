#include "IdValidator.h"

IDValidator::IDValidator()
	: m_idErrorType(NONE)
{
}

bool IDValidator::validate(const uint32_t& answer)
{
	return isValidID(answer);
}

std::string IDValidator::getErrorMsg()
{
	switch (m_idErrorType)
	{
	case OVER_NINE_DIGITS:
		return ID_LONG_ERROR_MSG;
	case WRONG_CONTROL_DIGIT:
		return ID_CONTROL_DIGIT_ERROR_MSG;
	case NONE:
	default:
		return "";
		break;
	}
}



bool IDValidator::isValidID(uint32_t id)
{
	std::string str_id = std::to_string(id);
	int counter = 0, raw_val = 0, actual_val = 0;
	
	if (str_id.length() > 9)
	{
		m_idErrorType = OVER_NINE_DIGITS;
		return false;
	}
	if (str_id.length() < 9)
	{
		while (str_id.length() < 9) str_id.insert(0, "0");
	}

	for (int i = 0; i < str_id.length(); i++)
	{
		raw_val = (str_id[i] - '0') * ((i % 2) + 1);
		actual_val = raw_val > 9 ? (raw_val - 9) : raw_val;
		counter += actual_val;

	}
	(counter % 10 == 0) ? m_idErrorType = NONE : m_idErrorType = WRONG_CONTROL_DIGIT;
	return (counter % 10 == 0);
}
