#ifndef DEFINE_H
#define DEFINE_H
#include "Token.h"


class Define : public Token {
    public:
        void execute(std::vector<std::string> argz);

        Define(Memory *memory, std::vector<Token*> *L_LIB);
};

#endif
