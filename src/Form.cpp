#include "Form.h"

Form::~Form()
{
}

void Form::fillForm()
{
	bool fields_correct = true;

	for (auto& field : m_fields)
	{
		if (!field->getFieldValidity())
		{
			field->fillField();
			fields_correct = false;
		}
	}
	if (fields_correct)
	{
		for (auto & val2Fields : m_2FieldValidators)
		{
			if (!val2Fields->get2FieldValidity())
			{
				std::cout << val2Fields->getErrorMsg() << std::endl;
				val2Fields->refillFields();
			}
		}
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

	for (auto& formVal : m_2FieldValidators)
	{
		if (!(formVal->validate()))
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

std::ostream& operator<<(std::ostream& ostr, const Form& myForm)
{
	myForm.printForm(ostr);
	return ostr;
}
