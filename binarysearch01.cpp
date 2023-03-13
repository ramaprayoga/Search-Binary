#include <iostream>
 
using namespace std;
 
int binarySearch(int array[], int size, int nilai)  //"BinarySearch" yang ada didalamnya terhubung dengan int main()
{
    int low = 0;  // diisi atau diset 0, agar mulai dari 0
    int higt = size - 1;  //-1 karena size yang ditulis merupakan data yang ada 
 
    int mid;
 
    while (low <= higt)  //diisi atau diset agar program berjalan 
    {
        mid = (low + higt) / 2;  //mencari nilai tengah antara low dan higt
 
        if(nilai == array[mid])
        {
            return mid;
        }
        else if (nilai > array[mid])
        {
            low = mid + 1;  //jika nilai tengah lebih kecil dari target, cari disetengah kanan
        }
        else
        {
            higt = mid - 1; //jika nilai tengah lebih besar dari target, cari disetengah kiri
        }
    }
 
    return -1;   //jika nilai tidak ditemukan, kembalikan -1 
 
}

int main()
{
    int A[] = {2, 4, 8, 14, 16, 20, 24, 28, 32};  // data yang ada 
 
    int nilai;
 
    cout << "Masukkanlah susatu Bilangan : " << endl;
    cin >> nilai;
 
    int hasil = binarySearch(A, 10, nilai);  // masukkan agar bisa masuk ke int binarysearch
 
    if(hasil >= 0)
    {
        cout << "Bilangan " << A[hasil] << " ditemukan di"
                " index " << hasil << endl;
    }
    else
    {
        cout << "Bilangan " << nilai << " Tidak ditemukan " << endl;
    }
    return 0;
}
