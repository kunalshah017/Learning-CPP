#include <iostream>
using namespace std;
int main()
{
    int array[10], number, ub, lb, mid;

    cout << "Enter 10 numbers in ascending order" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    lb = 0;
    ub = 9;

    cout << "Enter the number you want to search for : ";
    cin >> number;

    do
    {
        mid = (ub + lb) / 2;

        if (array[mid] == number)
        {
            cout << "Number found at index :" << mid + 1;
            break;
        }

        if (array[mid] > number)
        {
            ub = mid;
        }
        else
        {
            lb = mid;
        }

    } while (mid != number);

    return 0;
}
