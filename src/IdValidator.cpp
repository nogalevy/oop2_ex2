#include "IdValidator.h"

IDValidator::IDValidator()
{
}

bool IDValidator::validate(BaseField field)const
{
	return false;
	//return isValidID(field.m_message);
}

bool IDValidator::isValidID(uint32_t id) const
{
	
	std::string str_id = std::to_string(id);
	if(str_id.length() > 9)  return false;
	if (str_id.length() < 9)
	{
		while (str_id.length() < 9) str_id.insert(0, "0");
	}


	return false;
}
