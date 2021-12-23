#include <iostream>

#include "lccs.h"

using namespace std;

int main()
{
    color::SetColor(1,color::BLUE);
    cout << "ABOBA" << endl;
    color::SetAttr(color::Attr::RESET);
    cout << "ABOBA" << endl;

    return 0;
}