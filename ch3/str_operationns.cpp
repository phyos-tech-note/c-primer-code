#include <iostream>
using std::string;
using std::cout, std::endl, std::cin;
int main()
{
    // string s;          // empty string
    // cin >> s;          // read a whitespace-separated string into s
    // cout << s << endl; // write s to the output


    // string s1, s2;
    // cin >> s1 >> s2; // read first input into s1, second into s2
    // cout << s1 <<" "<< s2 << endl; // write both strings

    // string line;
    // // read input a line at a time until end-of-file
    // getline(cin, line);
    //     if (line.empty())
    //         cout << "Empty line" << endl;
    //     else
    //         cout << line << endl;
    // cout << line[0]  << endl  ;
    // return 0;




    // string s1 = "hello", s2 = "world"; // no punctuation in s1 or s2
    // string s3 = s1 + ", " + s2 + '\n';  

    // cout << s3 << endl;

    string s1 = "Hello";
    string s2 = "Hello World";
    string s3 = "Hiya";

    // ၁။ "Hello" < "Hello World"
    cout << "\"Hello\" < \"Hello World\" : " << (s1 < s2) << endl;

    // ၂။ "Hiya" > "Hello"
    cout << "\"Hiya\" > \"Hello\" : " << (s3 > s1) << endl;

    return 0;


}
