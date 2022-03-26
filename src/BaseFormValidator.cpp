#include "BaseFormValidator.h"

BaseFormValidator::BaseFormValidator()
	: m_isValid(false)
{
}

void BaseFormValidator::set2FieldValidity(const bool valid)
{
	m_isValid = valid;
}

bool BaseFormValidator::get2FieldValidity()const
{
	return m_isValid;
}