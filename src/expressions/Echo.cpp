#include "Echo.h"


Echo::Echo(Memory *memory, std::vector<Token*> *L_LIB) : Token (memory, L_LIB) {
    this->name = "Wscript.Echo";
}

void Echo::execute(std::vector<std::string> argz) {
    std::cout << argz[0] << std::endl;
}
