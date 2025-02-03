#include <iostream>
#include "hello1Function.h"
#include "hello2Function.h"

using namespace std;

int main() {
    string name1 = "Adam Mirski";
    hello1Function(name1);

    string name2 = "Kian Mashhadi";
    hello2Function(name2);

    return 0;
}