#include <iostream>
using namespace std;

int arr[20]; //array yang akan dicari 
int n;       //jumlah elemen di dalam array
int i;       // index dari elemen array


void input()
{
    while(true)
    {
        cout << "Masukan jumlah elemen dalam array";
        cin >> n;
        if ((n > 0) && (n <= 20))
        break;
     else 
            cout << "\nArray harus berjumlah minimal 1 dan maksimal 20. \n\n";

    }

    // Terima elemen array
    cout << "\n---------------------\n";
    cout << "Masukan elemen array  \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
    
}


void LinearSearch()
{
    char ch;
    int ctr; // jumlah perbandingan
    int item;


}

