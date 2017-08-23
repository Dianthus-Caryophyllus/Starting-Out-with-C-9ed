// Starting-Out-with-C-9ed
// mainly programming challenges for this book
// This is PC 1 for C10

#include <iostream>
using namespace std;

void sortAccendingOrder(double *array, int size);
double average(double *array, int size);

int main()
{
    int num;
    double avg;
    cout << "Enter the size of this score list: ";
    cin >> num;

    double *array = nullptr;  // To dynamically allocate an array
    array = new double[num];  // Allocate the address of a double array of a number to array
    
    cout << "Enter each score of the students: " << endl;
    
    for (int i = 0; i < num; i++)
    {
        cout << "- ";
        cin >> array[i];
    }

    sortAccendingOrder(array, num);   // pass the address of array as a parameter
    avg = average(array, num);
    
    cout << "Output the numbers in accending order of this array: ";
    for (int i = 0; i < num; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << "The average of the scores is " << avg << endl;
    
    delete [] array;    // deallocate memory
    array = nullptr;
    
    return 0;
}


double average(double *array, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += *array;
        array++;
    }
    return sum/size;
}

void sortAccendingOrder(double *array, int size)
{
    bool madeSwap;
    int temp = 0;
    int count = 0;
    do
    {
        madeSwap = false;
        for (int i = 0; i < (size - 1); i++)
        {
            count++;
            cout << "Test No. " << count << endl;
            if (array[i] > array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                madeSwap = true;
                cout << i << " ";
                cout << array[i] << " " << array[i+1] << endl;
            }
            
        }
    } while (madeSwap);
}
