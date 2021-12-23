#include <iostream>

using namespace std;

namespace color
{
    namespace Attr
    {
        const char* RESET  = "\e[0m";
        const char* BOLD   = "\e[1m";
        const char* HALF_HIGHLITED = "\e[2m";
        const char* SELECTED   = "\e[4m";
        const char* BLINK  = "\e[5m";
        const char* REVERSE= "\e[7m";
        const char* NORMAL_INTENSIVITY = "\e[22m";
        const char* CANCEL_UNDERLINE   = "\e[24m";
        const char* CANCEL_BLINK   = "\e[25m";
        const char* CANCEL_REVERSE = "\e[27m";
    }

    enum colors : short
    {
        BLACK,
        RED,
        GREEN,
        BROWN,
        BLUE,
        PURPLE,
        CYAN,
        GRAY
    };

    void SetAttr(const char* Attribute)
    {
        cout << Attribute;
    }

    void SetColor(bool bg = 0,int clr=0)
    {
        printf("\033[%d%dm",bg+3,clr);
    }
}