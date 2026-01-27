#include <iostream>
using std::string;
using std::cout, std::endl;

int main()
{
    string s1;
    s1 = "hello";
    string s2(s1);
    string s21 = s1;
    string s3("value");
    string s31 = "value";
    string s4(4, 'c');

    cout << s1 << endl << s2 << endl << s21 << endl << s3 << endl << s31 << endl << s4 << endl ;

    

}