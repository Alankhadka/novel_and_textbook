#include<iostream>
using namespace std;
#include "Textbook.h"


Textbook::Textbook(Author author_name,string fsubject,string fbookname,float fprice,float fversion,bool fhardcover):Book(fbookname,author_name,fprice)
{
    authorname=author_name;
    bookname=fbookname;
    setsubject(fsubject);
    setprice(fprice);
    setversion(fversion);
    hardcovered(fhardcover);
}

void Textbook::setsubject(string fsubject)
{
subject=fsubject;
}
string Textbook::getsubject()
{
    return subject;
}
void Textbook::setprice(float fprice)
{
    price=fprice;
}
float Textbook::getprice()
{
    return price;
}
void Textbook::setversion(float fversion)
{
    version=fversion;
}
float Textbook::getversion()
{
    return version;
}
void Textbook::hardcovered(bool fhardcover)
{
    hardcover=fhardcover;
}
bool Textbook::ishardcovered()
{
    return hardcover;
}

