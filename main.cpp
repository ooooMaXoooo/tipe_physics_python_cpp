#include <Windows.h>
#include <iostream>

int main(int argc, char** argv)
{
    system("g++ .\\cpp\\rk4.cpp -o .\\cpp\\out.exe");
    std::cout << "\n\n\n";
    system(".\\cpp\\out.exe 200 100 1.9891e30 5.9722e24 150e6 0 0 30000");
    //system("pause");
    return 0;
}