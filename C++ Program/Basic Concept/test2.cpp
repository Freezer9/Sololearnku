#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

int main()
{
      char string1 [] ="belajar pemrograman C++";

      cout<<"Konversi String ke huruf Kapital"<<endl;
      cout<<"--------------------------------"<<endl;
      cout<<"string1 : "<<string1<<endl;

      strupr(string1);
      cout<<"\nstring1 setelah dikonversi : "<<string1<<endl;

      _getche();
      return EXIT_SUCCESS;
}