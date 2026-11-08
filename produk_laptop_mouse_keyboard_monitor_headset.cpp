#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

   
    auto it = find(produk.begin(), produk.end(), "Keyboard");
    if (it != produk.end()) {
        int posisi = distance(produk.begin(), it);
        cout << "Produk Keyboard ada di posisi " << posisi << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }

    
    vector<string> hasil_filter;
    copy_if(produk.begin(), produk.end(), back_inserter(hasil_filter),
            [](const string& x) { return x.length() > 5; });

    cout << "[";
    for (size_t i = 0; i < hasil_filter.size(); i++) {
        cout << hasil_filter[i];
        if (i < hasil_filter.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}