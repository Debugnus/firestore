// USG:  /config/config.boot
#include <iostream>
#include <string>

int main(){
	int datasize = 0;
	std::string address = " ";
	std::string data = "0";

	while(address != "x") {
		datasize = 0;
		address = " ";
		data = "0";

		std::cout << "Paste addresses: ";
		address = "123.23.43.55,34.24.52.66,123.234.244.22"; // test line
		//std::cin >> address;
		
		for(int i = 0; i < address.length(); i++) {
			
			data[i] = address[i];
			datasize = data[i];
			if(address[i] == ',') {
								
				std::cout << "            address " << data << "\n";

				datasize = 0;
				data = "0";
				data.resize(15);
				data[i] = data[0];
				
			}
			datasize = data.length();
			data.resize(datasize++);
		}
		
		std::cout << "            address " << data << "\n";
		datasize = 0;
		address = " ";
		data = "0";
		
		data.resize(15);
		data[datasize] = data[0];

	}
	
	
	return 0;
}
