#include <iostream>
#include <string>

using namespace std;

struct Data {
    string nama;
    string alamat;
};

void bubbleSort(Data arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].nama > arr[j + 1].nama) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    Data data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };
    int n = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }

    return 0;
}