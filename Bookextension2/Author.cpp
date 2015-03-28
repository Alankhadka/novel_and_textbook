
#include <iostream>
#include "Author.h"

using namespace std;

Author::Author(){
}
Author::Author(string name, string gender, string email)
{
    authorName =  name;
    authorGender = gender;
    setAuthorEmail(email);
}

void Author::setAuthorEmail(string email)
{
    authorEmail = email;
}

string Author::getAuthorName()
{
    return authorName;
}

string Author::getAuthorGender()
{
    return authorGender;
}

string Author::getAuthorEmail()
{
    return authorEmail;
}

string Author::toString()
{
    return getAuthorName() + " at " + getAuthorEmail();
}
