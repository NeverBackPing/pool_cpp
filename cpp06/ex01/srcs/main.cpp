# include "../includes/Serializer.hpp"


int main(void)
{
	Data		*tmp;
	uintptr_t	mail;
	Data		*data = new Data;
	
	srand(time(0));
	data->value = rand() % 101;

	std::cout << "\033[0;32mCreation mail:\033[0m " << data->value << std::endl;

	mail = Serializer::serialize(data);

	std::cout << "\033[0;32mSend the mail:\033[0m " << mail << std::endl;

	tmp = Serializer::deserialize(mail);

	std::cout << "\033[0;32mReceived your email and read it:\033[0m "<< tmp->value << std::endl;

	std::cout << std::endl;

	std::cout << "\033[0;32mData Address:\033[0m " << data << std::endl;
	std::cout << "\033[0;32mTmp Address:\033[0m " << tmp << std::endl;
	
	delete data;
	return 0;
}
