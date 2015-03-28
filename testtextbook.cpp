#include<iostream>
using namespace std;
#include "Textbook.h"
int main()
{
    string aname;
    string gender;
    string email;
    string subject;
    string bookname;
    float version;
    float price;
    bool hardcover;
    cout<<"enter the name of author::";
    getline(cin,aname);
    cin.get();
    cout<<"enter the gender::";
    getline(cin,gender);
    cin.get();
    cout<<"enter the mail address::";
    getline(cin,email);
    cin.get();
    cout<<"enter the subject::";
    getline(cin,subject);
    cin.get();
    cout<<"enter the book name::";
    getline(cin,bookname);
    cin.get();
    cout<<"enter the version of the book::";
    cin>>version;
    cout<<"enter the pricing::";
    cin>>price;
    cout<<"Is it hard covered?::";
    cin>>hardcover;


    Author testauthor(aname,gender,email);
    Textbook testtextbook(testauthor,subject,bookname,price,version,hardcover);Book(bookname,testauthor,price);
    cout<<testtextbook.getsubject()<<" of version "<<testtextbook.getversion()<<" Book named "<<testtextbook.toString()<<endl;
    cout<<"The price is"<<testtextbook.getBookPrice();
}
