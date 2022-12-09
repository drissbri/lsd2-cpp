#include <iostream>
using namespace std;

class Contact {
  public:
    int Number;
    char* Name;
};


class PhoneBook {
  private:
    Contact Contact_List[8];

  public:

    // To add a new contact to the phonebook
    void Add(char* name,int number);

    // To search for a contact in the phonebook
    void Search(char* name);

    // To quit and delete all contacts in Phonebook
    void Exit();
};
