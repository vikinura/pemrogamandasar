# Program menghitung luas persegi

# Fungsi untuk menghitung luas persegi
def hitung_luas_persegi(sisi):
    return sisi * sisi

# Meminta input dari pengguna
sisi = float(input("Masukkan panjang sisi persegi: "))

# Menghitung luas persegi
luas = hitung_luas_persegi(sisi)

# Menampilkan hasil
print(f"Luas persegi dengan sisi {sisi} adalah {luas}")