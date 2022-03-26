#pragma once

#include "BaseValidator.h"

enum id_error_type { NONE, OVER_NINE_DIGITS, WRONG_CONTROL_DIGIT };

class IDValidator : public BaseValidator<uint32_t>
{
public:
	IDValidator();

	virtual bool validate(const uint32_t& answer);
	virtual std::string getErrorMsg();

private:
	bool isValidID(uint32_t id);
	enum id_error_type m_idErrorType;
};