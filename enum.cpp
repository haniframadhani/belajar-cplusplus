#include <iostream>
using namespace std;
enum warna
{
    merah,
    putih,
    hitam,
    coklat = 5,
    kuning,
    biru
};
int main()
{
    warna kain;
    kain = putih;
    if (kain == hitam)
    {
        cout << "warna kain hitam" << endl;
    }
    cout << kain << endl;

    return 0;
}
