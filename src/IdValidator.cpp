#include "IdValidator.h"

IDValidator::IDValidator()
{
}

bool IDValidator::validate(uint32_t answer)const
{
	return false;
	//return isValidID(answer);
}


//took the idea from : https://github.com/atlanteh/israeli-id-validator
bool IDValidator::isValidID(uint32_t id) const
{
	std::string str_id = std::to_string(id);
	int counter = 0, raw_val = 0, actual_val = 0;
	
	if(str_id.length() > 9)  return false;
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

	return (counter % 10 == 0);
}
