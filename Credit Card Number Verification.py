import re
num=input("Enter the card number: ")
if re.findall(r"^[456]\d{3}[-]*\d{4}[-]*\d{4}[-]*\d{4}[-]*$",num):
    print("Matched")
else:
    print("Not matched")