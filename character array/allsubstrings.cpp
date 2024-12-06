/* For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
*/
#include <iostream>
using namespace std;
void allsubstrings(char input[])
{
    int i = 0;
    while (input[i] != '\0')
    {
        int j = i;
        while (input[j] != '\0')
        {
            if (i==j)
            {
                cout << input[i];
                cout << endl;
            }
            else
            {
                for (int c = i; c <= j; c++)
                {
                    cout << input[c];
                    
                }
                cout<<endl;
                
            }
            j++;
        }
        i++;
    }
}
int main()
{
    char input[100];
    cin.getline(input, 100);
    allsubstrings(input);
}