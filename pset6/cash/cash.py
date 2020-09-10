from cs50 import get_float
from math import floor

while True:
    dollars = get_float("change owed: ")
    if dollars >= 0:
        break

cents =floor(100 * dollars)
coins = 0
    
while cents >=25:
    cents -= 25
    coins += 1
while cents >=10:
    cents -=10
    coins +=1
while cents >=5:
    cents -=5
    coins+=1
while cents >=1:
    cents -=1
    coins+=1
print("Number of coins:",coins)    


        
