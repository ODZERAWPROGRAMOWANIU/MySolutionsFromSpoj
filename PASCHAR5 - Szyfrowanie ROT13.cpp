#include <iostream>
using namespace std;

int main() {
  string textToEncrypt, enrcyptedText;
  while (getline (cin, textToEncrypt))
    {
      enrcyptedText = "";
      for (int i = 0; i < textToEncrypt.length (); i++)
        {
          if (islower (textToEncrypt [i]))
          {
            enrcyptedText += (textToEncrypt [i] - 'a' + 13) % 26 + 'a';
          }
          else if (isupper (textToEncrypt [i]))
          {
            enrcyptedText += (textToEncrypt [i] - 'A' + 13) % 26 + 'A';
          }
          else if (isdigit (textToEncrypt [i]))
          {
            enrcyptedText += (textToEncrypt [i] - '0' + 5) % 10 + '0';
          }
          else
          {
            enrcyptedText += textToEncrypt [i];
          }
        }
      cout << enrcyptedText << endl;
    }
}
