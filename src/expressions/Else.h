#ifndef ELSE_H
#define ELSE_H
#include "Token.h"


class Else : public Token {
    public:
        void execute(char ** argz);

        Else();
};

#endif
