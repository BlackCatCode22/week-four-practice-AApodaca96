#include <iostream>

using namespace std;

int main()
{
    string myStr = "abcdefghij";

    cout << myStr[0] << endl;
    cout << myStr[1] << endl;


    // For Loop That Outputs Each Character of String On New Line
    for(int i = 0; i < myStr.size(); i++){
        cout << myStr[i] << endl;
    }

    // Reverse the String
    for (int i = myStr.length() - 1; i >= 0; i--){
        cout << myStr[i];
    }

    // For Loop That Outputs a String as a Sequence of Chars
    //for (int i = myStr.length() - 1; i >= 0; i--){
    //   cout << myStr[i];
    //}


    // ChatGPT Solution Using ASCII
    for (char c = 'a'; c <= 'j'; ++c){
        cout << c;
    }
    cout << endl;

    // Create a One Dimensional Array and Fill With A-H
    char myChars[10] = {'a','b','c','d','e','f','g','h','i','j'};


    cout << myChars[4] << endl;


    // For Loop that Outputs Name, Index, and Value
    for (int i = 0; i < 10; i++){
        cout << "\n myChars[" << i << "] is " << myChars[i] << "\n";
    }

    // Condition - Booleans
    int num1 = 33;
    int num2 = 111;

    if (num1 > num2){
        cout << "\n\n The Test Condition was True" << endl;
    }
    else {
        cout << "\n\n The Test Condition was False" << endl;
    }



    return 0;
}
