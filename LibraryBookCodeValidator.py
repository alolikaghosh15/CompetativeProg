code = input("Enter book code: ")

if (len(code) == 12 and
    code[0:3].isupper() and
    code[0:3].isalpha() and
    code[3] == '-' and
    code[4:8].isdigit() and
    code[8] == '-' and
    code[9:12].isdigit()):

    print("Valid book code")
else:
    print("Invalid book code")
