print(f"Diketahui : ")

JumlahPutaran = int (input(f"Pak Dengklek mengelilingi taman = "))

jarak = int(input(f"Jarak tempuh Pak Dengklek = "))

r = jarak / JumlahPutaran
HasilKeliling = r / ( 2 * 3.14)

print(f"Jawaban : ")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah =  {HasilKeliling :.2f}")