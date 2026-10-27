def biodata(yearBorn, name, origin):
    year_now = 2020
    age = year_now - yearBorn

    print("Perkenalkan Nama Saya : ", name)
    print("Umur Saya : ", age)
    print("Saya Angkatan : ", year_now)
    print("Asal Saya dari : ", origin)

yearBorn = int(input())
name = input()
origin = input()

biodata(yearBorn, name, origin)