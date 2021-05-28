#include <iostream>
#include "StudentName.h"
#include <string>
using namespace std;
int main()
{
    StudentName firstTest("Ali ayman ahmed");
    firstTest.print();
    firstTest.replace(1,2);

    StudentName secondTest("Renad Ahmed Abdelbaky");
    secondTest.print();
    secondTest.replace(3, 1);

    StudentName thirdTest("Farah Elaraby");
    thirdTest.print();
    thirdTest.replace(2, 4);

    StudentName fourthTest("Ahmed");
    fourthTest.print();
    fourthTest.replace(1, 4);

    StudentName fifthTest("Martina Emad Gendy");
    fifthTest.print();
    fifthTest.replace(3, 4);
    return 0;
}
