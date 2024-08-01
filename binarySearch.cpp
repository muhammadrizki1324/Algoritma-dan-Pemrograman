#include <iostream>
#include <vector>
#include <algorithm>

struct myStruct {
    int value;
    int index;
};

// Fungsi untuk melakukan Quick Sort
void quickSort(std::vector<myStruct>& array, int left, int right) {
    int i = left, j = right;
    int pivot = array[(left + right) / 2].value;
    while (i <= j) {
        while (array[i].value < pivot) i++;
        while (array[j].value > pivot) j--;
        if (i <= j) {
            std::swap(array[i], array[j]);
            i++;
            j--;
        }
    }
    if (left < j) quickSort(array, left, j);
    if (i < right) quickSort(array, i, right);
}

// Fungsi untuk melakukan Binary Search
std::vector<int> binarySearch(const std::vector<myStruct>& array, int target) {
    int left = 0, right = array.size() - 1;
    std::vector<int> foundIndices;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid].value == target) {
            foundIndices.push_back(array[mid].index); // Simpan indeks asli
            // Cari duplikat di kedua sisi
            int temp = mid;
            while (--temp >= left && array[temp].value == target) {
                foundIndices.push_back(array[temp].index);
            }
            temp = mid;
            while (++temp <= right && array[temp].value == target) {
                foundIndices.push_back(array[temp].index);
            }
            break;
        }
        if (array[mid].value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return foundIndices;
}

// Fungsi untuk mencetak hasil pencarian
void printResult(const std::vector<int>& indices, int target) {
    if (indices.empty()) {
        std::cout << "Angka " << target << " tidak ada dalam array\n";
    } else {
        std::cout << "Angka " << target << " ada di indeks ke ";
        for (size_t i = 0; i < indices.size(); ++i) {
            std::cout << indices[i] + 1; // Tambah +1 untuk mengubah ke indeks 1-based
            if (i < indices.size() - 1) std::cout << " dan ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Inisialisasi array
    std::vector<int> inputArray = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    std::vector<myStruct> dataArray(inputArray.size());

    // Isi dataArray dengan nilai dan indeks asli
    for (size_t i = 0; i < inputArray.size(); ++i) {
        dataArray[i] = {inputArray[i], static_cast<int>(i)};
    }

    // Urutkan array menggunakan Quick Sort
    quickSort(dataArray, 0, dataArray.size() - 1);

    // Input dari pengguna
    int searchValue;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> searchValue;

    std::vector<int> resultIndices = binarySearch(dataArray, searchValue);
    printResult(resultIndices, searchValue);

    return 0;
}