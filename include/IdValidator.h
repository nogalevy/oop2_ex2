#pragma once

#include "BaseValidator.h"

class IDValidator : public BaseValidator<uint32_t>
{
public:
	IDValidator();

	virtual bool validate(uint32_t answer)const;

	bool isValidID(uint32_t id)const;
private:
};