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

    for (int i = 0; i < 10; i++)
    {
        for (int c = 0; c < 10 - i - 1; c++)
        {

            if (array[c] > array[c + 1])
            {
                int temp = array[c];
                array[c] = array[c + 1];
                array[c + 1] = temp;
            }
        }
    }

    cout << "Sorted array is" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}