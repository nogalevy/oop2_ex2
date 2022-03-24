#include "BaseField.h"

BaseField::BaseField(const std::string msg)
	:m_message(msg), m_isValid(false)
{

}

void BaseField::setFieldValidity(const bool valid)
{
	m_isValid = valid;
}

bool BaseField::getFieldValidity() const
{
	return m_isValid;
}
