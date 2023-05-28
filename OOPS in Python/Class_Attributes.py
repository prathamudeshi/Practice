class item():
    pay_rate=0.8
    def __init__(self,name: str,price: float ,quantity=0):

        assert price >=0, f"Price {price} is not greater than or equal to zero"
        assert quantity >=0, f"Quantity {quantity} is not greater than or equal to zero"

        self.name=name
        self.price=price
        self.quantity=quantity

    def total(self):
        return self.price*self.quantity
    
    def discount(self):
        self.price=self.price*self.pay_rate

item1=item("phone",100,5)
item2=item("laptop",1000,3)
item2.pay_rate=0.7
item1.discount()
item2.discount()

print(item1.name)
print(item1.total())
print(int(item1.price))
print(item2.name)
print(item2.total())
print(int(item2.price))
