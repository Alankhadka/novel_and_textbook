
#include <iostream>

using namespace std;

class Author{
private:
    string authorName;
    string authorGender;
    string authorEmail;

public:
    Author(string name, string gender, string email);
    Author();
    void setAuthorEmail(string email);
    string getAuthorName();
    string getAuthorGender();
    string getAuthorEmail();
    string toString();
};
