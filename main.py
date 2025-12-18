def  F2C(fah):
    cel = (fah - 32) * 5 / 9
    return cel
    
def C2F(cel):
    fah = (cel * 1.8) + 32
    return fah
    
def main_program():
    
    print("1.Fahrenheit To Celcius")
    print("2.Celcius To Fahrenheit")
    choice = int(input("Please enter your choice : "))
    
    if choice == 1:
        fah_in = float(input("Please enter temp(F) : "))
        print(F2C(fah_in))
    elif choice == 2:
        cel_in = float(input("Please enter temp(C) : "))
        print(C2F(cel_in))
    else:
        print("Invalid Choice!!!")
        print()
        main_program()
    
main_program()

