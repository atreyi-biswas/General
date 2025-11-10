class BankAccount:
    def __init__(self, bal=0):
        self._balance = bal
    def deposit(self, amt):
        if amt>0: self._balance += amt
    def balance(self):
        return self._balance

acct = BankAccount(100)
acct.deposit(50)
print(acct.balance())
