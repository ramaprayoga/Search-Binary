#include <iostream>
 
using namespace std;
 
int binarySearch(int array[], int size, int nilai)
{
    int low = 0;
    int higt = size - 1;
 
    int mid;
 
    while (low <= higt)
    {
        mid = (low + higt) / 2;
 
        if(nilai == array[mid])
        {
            return mid;
        }
        else if (nilai > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            higt = mid - 1;
        }
    }
 
    return -1;
 
}

int main()
{
    int A[] = {2, 4, 8, 14, 16, 20, 24, 28, 32};
 
    int nilai;
 
    cout << "Masukkanlah susatu Bilangan : " << endl;
    cin >> nilai;
 
    int hasil = binarySearch(A, 10, nilai);
 
    if(hasil >= 0)
    {
        cout << "Bilangan " << A[hasil] << " ditemukan di"
                " index " << hasil << endl;
    }
    else
    {
        cout << "Bilangan " << nilai << " Tidak ditemukan " << endl;
    }
}
