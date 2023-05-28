class item():
    pay_rate=0.8
    all=[]
    def __init__(self, name: str, price: float, quantity=0):

        assert price>=0, f"Price {price} is not greater than or equal to zero"
        assert quantity>=0, f"Quantity {quantity} is not greater than or equal to zero"

        self.name=name
        self.price=price
        self.quantity=quantity

        item.all.append(self)
    
    def total(self):
        return self.price*self.quantity
    
    def discount(self):
        self.price*=self.pay_rate

item1 = item("Phone", 100, 1)
item2 = item("Laptop", 1000, 3)
item3 = item("Cable", 10, 5)
item4 = item("Mouse", 50, 5)
item5 = item("Keyboard", 75, 5)

for x in item.all:
    print(x.name)