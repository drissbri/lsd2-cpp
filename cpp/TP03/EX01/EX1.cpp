#include "EX1.h"


int main() 
{
  PhoneBook phonebook1;
  int x,num;
  char na[8];
  cout << "--------[CODES]--------\n1 for adding a contact \n2 for seraching for a contact \n3 for exiting \n";
  while(1)
  {
  cout << "-----------------------\nEnter a Code : ";
  cin >> x;
  if (x == 1) //Add a contact
    {
      cout << "Enter the Number of the person : \n";
      cin >> num;
      cout << "Enter the Name of the person : \n";
      cin >> na;
      phonebook1.Add(na,num);
      cout << "Contact Added Successfully !\n";
    }
  if (x == 2) //Search for a contact
  {
      cout << "Enter the Name of the person : \n";
      cin >> na;
      phonebook1.Search(na);
  }
  if (x == 3) // Exit
  {
    phonebook1.Exit();
  }
  }
  return 0;
}