#include<iostream>
#include "Novel.h"
using namespace std;
Novel::Novel(Author author_name,string novelname,string Ngenre,float Nprice,float fquantity,bool NIspriceless):Book(novelname,author_name,Nprice,fquantity)
{
    setgenre(Ngenre);
    setprice(Nprice);
    nameofnovel=novelname;
    authorname=authorname;
    setquantity(fquantity);
    setIspriceless(NIspriceless);
    }

void Novel::setquantity(float fquantity)
{
   quantity=fquantity;
}
float Novel::getquantity()
{
    return quantity;
}
void Novel::setgenre(string Genre)
{
    genre=Genre;

}

string Novel::getgenre()
{
    return genre;
}

void Novel::setprice(float Price)
{

price=Price;
}

float Novel::getprice()
{
    return price;
}




void Novel::setIspriceless(bool priceless)
{
    Ispriceless=priceless;
}
bool Novel::getIspriceless()
{
    return Ispriceless;
}

