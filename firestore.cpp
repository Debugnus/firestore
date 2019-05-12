// USG:  /config/config.boot
#include <iostream>
#include <string>

int main(){
	
	std::string address = " ";
	
	while(address != "x") {
		
		address = " ";
		
		std::cout << "\n\nPaste addresses: ";
		//address = "123.23.43.55,34.24.52.66,123.234.244.22"; // test line
		std::cin >> address;

		std::cout << "address "; // output template for USG Groups

		for(int i = 0; i < address.length(); i++) {
			
			if(address[i] != ',') { // do following if character not a comma
				
				std::cout << address[i];  // output current character
								
			} else {  // when it finds a comma do following
				
				std::cout << "\n";  // create new line for next address
				std::cout << "address "; // output template for USG Groups
				
			}
			
		}
	std::cout << "\n";	
	}

	// output recomendation to have specific tabstop configuration 
	// in a .vimrc file on the USG and that vim is installed
	
	return 0;
}
