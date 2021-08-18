#include <iostream>

class Data {
public:
	int n;
};

//retournera le paramètre sous la forme d’un nombre entier
uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

//renvoie les données brutes que vous avez créées
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) {
	Data * addr = new Data;
	addr->n = 50;
	std::cout << "Address_initial:    " << addr << "    Value_Stored: " << addr->n << std::endl;
	uintptr_t addr_temp = serialize(addr);
	std::cout << "Address_serialized: " << addr_temp << std::endl;
	Data * addr_recovered = deserialize(addr_temp);
	std::cout << "Address_recovered:  " << addr_recovered << "    Value_Stored: " << addr_recovered->n << std::endl;
	delete addr;
	return 0;
}
