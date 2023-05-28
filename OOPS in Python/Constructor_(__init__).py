class item():
    def __init__(self,name:str,price:float,quantity=0):

        assert price >=0, f"Price {price} is not greater than or equal to 0"
        assert quantity >=0, f"Quantity {quantity} is not greater than or equal to 0"

        self.name= name
        self.price= price
        self.quantity= quantity
    def total(self):
        return self.price*self.quantity
    

item1=item("Phone",100,5)

item2=item("Laptop",1000,3)

print(item1.name)
print(item1.total())
print(item2.name)
print(item2.total())