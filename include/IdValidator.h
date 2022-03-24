#pragma once

#include "BaseValidator.h"

class IDValidator : public BaseValidator<uint32_t>
{
public:
	IDValidator();

	virtual bool validate(BaseField field)const;

	bool isValidID(uint32_t id)const;
private:
};