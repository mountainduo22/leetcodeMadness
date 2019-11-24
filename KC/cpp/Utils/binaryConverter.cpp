#include <stdio.h>
#include <iostream>
using namespace std;

void binaryConversion(int decimal);

int main(int argc, const char *argv[])
{
    if (argc >=2)
    {
        int val = atoi(argv[1]);
        binaryConversion(val);
    }
    return 0;
}

void binaryConversion(int decimal)
{
    std::string r;
    while (decimal != 0)
    {
        r = (decimal % 2 == 0 ? "0" : "1") + r;
        decimal /= 2;
    }
    cout << r << endl;
}