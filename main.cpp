#include <iostream>
#include <string>

int main() {
    std::string kode, nama, pembeli;
    int harga = 0, jumlah_beli = 0, total = 0, potongan = 0, jumlah_bayar = 0, kembalian = 0;

    std::cout << "\n Toko Ice Cream " << std::endl;
    std::cout << "================" << std::endl;
    std::cout << "Input Nama Pembeli: ";
    std::getline(std::cin, pembeli);

    std::cout << "Pilihan Ice Cream Yang Tersedia :" << std::endl;
    std::cout << "A1 - Chocolate Strawberry (15.000)" << std::endl;
    std::cout << "A2 - Chocolate Vanila (20.000)" << std::endl;
    std::cout << "A3 - Chocolate Cappuccino (25.000)" << std::endl;

    std::cout << "Es Cream yang dipilih (kode): ";
    std::cin >> kode;

    std::cout << "Jumlah beli: ";
    std::cin >> jumlah_beli;

    // Determine harga based on kode
    if (kode == "A1") {
        harga = 15000;
        nama = "Chocolate Strawberry";
    } else if (kode == "A2") {
        harga = 20000;
        nama = "Chocolate Vanilla";
    } else if (kode == "A3") {
        harga = 25000;
        nama = "Chocolate Cappuccino";
    } else {
        std::cout << "Kode tidak valid!" << std::endl;
        return 1; // Exit if the code is invalid
    }

    total = harga * jumlah_beli;

    // Calculate discount
    if (kode == "A1" || total > 40000) {
        potongan = 0.05 * total; // 5% discount
    } else if (kode == "A2" && total > 50000) {
        potongan = 0.1 * total; // 10% discount
    } else {
        potongan = 0; // No discount
    }

    int jumlah_total = total - potongan;

    // Output receipt
    std::cout << "\n====================" << std::endl;
    std::cout << "  Struk Pembayaran " << std::endl;
    std::cout << "Nama Pembeli: " << pembeli << std::endl;
    std::cout << "Pilihan Ice Cream: " << nama << std::endl;
    std::cout << "Harga: " << harga << std::endl;
    std::cout << "Jumlah: " << jumlah_beli << std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Potongan: " << potongan << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "Total Keseluruhan: " << jumlah_total << std::endl;

    std::cout << "Uang Bayar: ";
    std::cin >> jumlah_bayar;

    kembalian = jumlah_bayar - jumlah_total;

    std::cout << "Uang Kembalian: " << kembalian << std::endl;
    std::cout << "====================" << std::endl;

    return 0;
}
