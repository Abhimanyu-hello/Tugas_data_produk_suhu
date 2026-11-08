produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]


if "Keyboard" in produk:
    posisi = produk.index("Keyboard")
    print(f"Produk Keyboard ada di posisi {posisi}")
else:
    print("data tidak ditemukan")


hasil_filter = [x for x in produk if len(x) > 5]
print(hasil_filter)