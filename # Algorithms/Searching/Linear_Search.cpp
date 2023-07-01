// I this algorithm we will search for a number in an array using linear search
// we can also use this algorithm to search for a character in a character array
// both sorted and unsorted arrays can be searched using this algorithm
// The algorithm is as follows:

#include <iostream>
using namespace std;
int main()
{
    int array[10];

    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    int number;
    cout << "Enter number to search for" << endl;
    cin >> number;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == number)
        {
            cout << "Number found at index " << i + 1 << endl;
            break;
        }
    }

    return 0;
}
