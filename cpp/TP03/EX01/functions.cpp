#include "EX1.h"


// To add a new contact to the phonebook
void PhoneBook::Add(char* name,int number)
{
  for (int i=0 ; i<8 ; i++)
  {
    if (&Contact_List[i] == NULL)
    {
      Contact_List[i].Number = number;
      Contact_List[i].Name = name;
      return;
    }
  }
  Contact_List[0].Number = number;
  Contact_List[0].Name = name;
  return;
}

// To search for a contact in the phonebook
void PhoneBook::Search(char* name)
{
  for (int i=0 ; i<8 ; i++)
  {
    if (Contact_List[i].Name == name)
    {
      std::cout << "Number : " << Contact_List[i].Number << std::endl;
      return;
    }
  }
  std::cout << "No such name in PhoneBook";
}
// To quit and delete all contacts in Phonebook
void PhoneBook::Exit()
{
  for (int i=0 ; i<8 ; i++)
  {
    if (&Contact_List[i] == NULL)
    {
      break;
    }
    free(&Contact_List[i].Name);
    free(&Contact_List[i].Number);
  }
  exit(EXIT_SUCCESS);    
}
