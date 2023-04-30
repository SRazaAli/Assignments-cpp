#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }

    int repeat = 0;
    int unique[10];
    int uCount = 0;
    bool isUnique;
    for (int i = 0; i < n; i++)
    {
        isUnique = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                repeat++;
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            unique[uCount] = arr[i];
            uCount++;
        }
    }

    cout << "Total number of elements in the array: " << n << endl;
    cout << "Number of repeated elements in the array: " << repeat << endl;
    cout << "Unique elements in the array: ";
    for (int i = 0; i < uCount; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}