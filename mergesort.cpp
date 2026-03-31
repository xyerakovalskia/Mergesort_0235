#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n---------------------------" << endl;
    cout << "\nMasukkan Isi element array" << endl;
    cout << "\n---------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke-" << i << " : ";
        cin >> arr[i];
    }
}

// create function mergesort
void mergesort (int low, int high)
{

    if (low >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursif memanggil diri sendiri
    mergesort(low, mid);      // step 3.a
    mergesort(mid + 1, high); // step 3.b

    // step 4
    int i = low;      // step 4.a
    int j = mid + 1;  // step 4.b
    int k = low;      // step 4.c

    while (i <= mid && j <= high) // step 4.d
    {
        if (arr[i] < arr[j]) // step 4.d.i
        {