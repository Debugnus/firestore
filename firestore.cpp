// USG:  /config/config.boot
#include <iostream>
#include <string>

int main(){
	int ruleN = 0;
	int datasize = 0;
	std::string address = " ";
	std::string data = "000.000.000.000";
	std::cout << "Enter the starting rule number: ";
	std::cin >> ruleN;

	while(address != "x") {
		std::cout << "Paste addresses: ";
		std::cin >> address;
		
		for(int i = 0; i < address.length(); i++) {
			
			data[i] = address[i];
			datasize = data[i];
			if(address[i] == ',') {
				data.resize(data[i]--);
				
				std::cout << "        rule " << ruleN << " {\n";
				std::cout << "            action drop\n";
				std::cout << "            description " << data << "\n";
				std::cout << "            protocol all\n";
				std::cout << "            source {\n";
				std::cout << "                address " << data << "\n";
				std::cout << "            }\n";
				std::cout << "        }\n";
				ruleN++;
				data.resize(15);
				data[i] = data[0];
				
			}
		}
		data.resize(datasize);
		std::cout << "        rule " << ruleN << " {\n";
		std::cout << "            action drop\n";
		std::cout << "            description " << data << "\n";
		std::cout << "            protocol all\n";
		std::cout << "            source {\n";
		std::cout << "                address " << data << "\n";
		std::cout << "            }\n";
		std::cout << "        }\n";
		ruleN++;
		data.resize(15);
		data[datasize] = data[0];

	}
	
	
	return 0;
}
