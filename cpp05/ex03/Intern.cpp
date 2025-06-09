#include <Intern.hpp>


Intern::Intern()
{

}

Intern::~Intern()
{

}


AForm *Intern::makeForm(char *FormName, char *target)
{
	AForm doc(FormName, target);
	return (doc);
}
