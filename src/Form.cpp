#include "Form.h"

Form::~Form()
{
}

void Form::fillForm()
{
	for (auto& field : m_fields)
	{
		if(!field->getFieldValidity())
			field->fillField();
	}
}

void Form::addField(BaseField* field)
{
	m_fields.emplace_back(field);
}

void Form::addValidator(BaseFormValidator* formValidator)
{
	m_2FieldValidators.emplace_back(formValidator);
}

bool Form::validateForm()
{
	bool valid = true;

	for (auto& field : m_fields)
	{
		if (!(field->validateField()))
		{
			valid = false;
		}
	}

	return valid;
}

void Form::printForm(std::ostream& ostr) const
{
	for (auto& field : m_fields)
	{
		field->printField(ostr);
	}
}

std::ostream& operator<<(std::ostream& ostr, const Form& my_form)
{
	my_form.printForm(ostr);
	return ostr;
}
