suhu = [-3, 5, 0, -12, 8, 15, -1, 22]


if 0 in suhu:
    posisi = suhu.index(0)
    print(f"Nilai 0 ada di posisi {posisi}")
else:
    print("data tidak ditemukan")


hasil_filter = [x for x in suhu if x > 0]
print(hasil_filter)