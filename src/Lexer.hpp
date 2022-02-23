#ifndef LEXER_HPP
#define LEXER_HPP

#include "VirtualMachine.hpp"

#include "Tokens.hpp"

#include <vector>

class Lexer
{
private:
    static std::vector<Token> m_Tokens;
    static std::string m_InputString;
    static bool m_Error;
public:
    static void lexFile(const char* filePath);
    static void lexString(const char* inputString);

    static void printTokens();

    static void deallocate();
private:
    Lexer() {}
    ~Lexer() {}

    static void parseString();
    static void getTokenType(Token& token);
    static void parseWord(Token& token);
    static bool isDelimiter(char c);

    static bool checkComments(bool* start, bool* end, bool* comment, bool* multiLineComment, int index);
};

#endif
