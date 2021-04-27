/*
Lesson 6.1 Samples
Pawelski
4/23/2021
Here are the samples for today's lesson!
*/

#include <iostream>
#include <string>
using namespace std;

/*
Converts all the letters within the string to uppercase.
*/
string toupper(string text)
{
    string textUpper = "";
    for (int i = 0; i < text.length(); i++)
    {

        textUpper += toupper(text[i]);
    }
    return textUpper;
}

/*
Counts the number of times the target appears in the source text.
*/
int countOccurances(string source, string target)
{
    int count = 0;
    int newStart = source.find(target);
    while (newStart != string::npos)
    {
        count++;
        newStart = source.find(target, newStart + 1);
    }
    return count;
}

int main()
{
    /*
    Example #1
    Shows how the length() function can be used to find how many
    characters are in a string.
    */
    string text = "abcdefg";
    cout << "Length: " << text.length() << "\n";
    cout << "Size: " << text.size() << "\n\n";

    /*
    Example #2
    Shows how to access individual characters within a string.
    */
    string word = "supercalifragilisticexpialidocious";
    cout << word[0] << "\n";    // use [0] to allows get the first letter
    cout << word[5] << "\n";
    cout << word[10] << "\n";
    cout << word[33] << "\n";   // this only works for the specific word
    cout << word[word.length() - 1] 
        << "\n\n";    // this would work for any word

    /*
    Example #3
    This example demonstrates how to use substr to get portions of a string.
    In addition, it also demonstrates how to use find.
    */
    //               0123456789012345678901234
    string sample = "This is a simple sentence.";
    string word1 = sample.substr(0, 4);
    cout << "Gets the text starting at 0 and is 4 long: " << word1 << "\n";
    cout << "Gets the text starting at 5 and is 2 long: " 
        << sample.substr(5, 2) << "\n";
    string lastHalf = sample.substr(10);
    cout << "Gets thte text starting at 9 to the end: " << lastHalf << "\n";
    int firstSpace = sample.find(" ");
    cout << "The first space is at: " << firstSpace << "\n";
    cout << "The word \"simple\" starts at: " 
        << sample.find("simple") << "\n\n";

    /*
    Example #4
    This example shows how you can compine find and substr to do a variety
    of actions with strings, such as spliting a full name into a first and
    last name.
    */
    string fullName, firstName, lastName;
    int split;
    cout << "Enter your full name >> ";
    cin.clear();
    getline(cin, fullName);
    split = fullName.find(' ');     // you can search for characters as well!
    firstName = fullName.substr(0, split);
    lastName = fullName.substr(split + 1);
    cout << "Your first name is " << firstName << ".\n";
    cout << "Your last name is " << lastName << ".\n\n";

    /*
    Example #5
    This example uses a loop to access all letters within a string
    and convert them to uppercase. It use a function for characters
    that converts the characters to uppercase.
    */
    string userInput;
    cout << "Enter some text: ";
    cin.clear();
    getline(cin, userInput);
    cout << "Text before function: " << userInput << "\n";
    userInput = toupper(userInput);
    cout << "Text after function: " << userInput << "\n\n";

    /*
    Example #6
    In this example, we a loop to count the number of times
    a piece of text appears within another.
    */
    string textToSearch, targetText;
    cout << "Enter some text >> ";
    cin.clear();
    getline(cin, textToSearch);
    cout << "Enter the text to search for >> ";
    cin.clear();
    getline(cin, targetText);
    cout << "The text " << targetText << " occured "
        << countOccurances(textToSearch, targetText)
        << " times in the text.\n";
    return 0;
}
