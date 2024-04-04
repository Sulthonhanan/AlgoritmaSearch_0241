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


    do
    {
        // Masukan nomor yang akan dicari
        cout << "\nMasukan elemen yang mau kamu cari : "; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2
        while (i < n) //step 3
        {
            ctr++;
            if (arr[i] == item)
        {
            cout << "\n" << item << "ditemukan pada posisi" << (i + 1) << endl; // step 6
            break;
        }
        i++; //step 4    
    }
    
    if (i == n) // step 5
        cout << "\n" << item << "Tidak ditemukan di dalam array\n";
    cout << "\nJumlah perbandingan : " << ctr << endl;

    cout << "\n Lanjutkan pencarian (y/n) :";
    cin >> ch;


    }while ((ch== 'y')  || (ch== 'Y'));
}

void display()
{
    cout << "Elemen Array adalah :";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


