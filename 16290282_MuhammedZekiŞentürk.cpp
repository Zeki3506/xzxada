from  math import*

sayi = int(input("Lütfen pozitif bir tam sayı giriniz: "))
print("1-cosx = " + str(1 - math.sin(int(sayi))))


from  math import*

sayi = int(input("Lütfen pozitif bir tam sayı giriniz: "))
cos_kare = math.cos(sayi) ** 2 
sin_kare = math.sin(sayi) ** 2 
print("cos^2x-sin^2x = " + str(cos_kare - sin_kare))


from  math import*

sayi = int(input("Lütfen pozitif bir tam sayı giriniz: "))
sayi_kare = (sayi ** 2) + 1
print("karekök(x^2+1)-1 = " + str(sqrt(sayi_kare) - sayi))


from  math import*

sayi = int(input("Lütfen pozitif bir tam sayı giriniz: "))
print("sinx-cosx = " + str(math.sin(sayi) - math.cos(sayi)))


from  math import*

sayi = int(input("Lütfen pozitif bir tam sayı giriniz: "))
print("e^3x-3e^2x+5e^x-1 = " + str(math.exp(3 * sayi) - (3 * math.exp(2 * sayi)) + (5 * math.exp(sayi)) - 1))