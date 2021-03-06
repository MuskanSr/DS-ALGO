/*
Given a string, write a c function to check if it is palindrome or not.
A string is said to be palindrome if reverse of the string is same as string. For example, b abbab  is palindrome, but b abbcb  is not palindrome.
*/

#include <iostream>
#include <cstring>

using namespace std;

bool
isPallindrome (char a[100])
{
  int i = 0;
  int j = strlen (a) - 1;
  while (i < j)
    {
      if (a[i] == a[j])
	{
	  i++;
	  j--;
	}
      else
	{
	  return false;
	}
    }
  return true;
}

int main ()
{
  char a[100];
  cin.getline (a, 100);
  if (isPallindrome (a))
    {
      cout << "Palindromed string";
    }
  else
    {
      cout << "Not a palindromed string";
    }
  return 0;
}
