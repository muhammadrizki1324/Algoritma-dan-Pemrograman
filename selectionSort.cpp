#include <iostream>
#include <string>

using namespace std;

struct Data {
    string nama;
    string alamat;
};

void selectionSort(Data arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].nama < arr[min_idx].nama)
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
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
    selectionSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }

    return 0;
}