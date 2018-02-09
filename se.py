num = 55
num2 = 24
num3 = 34
if (num >= num2) and (num >= num3):
   largest = num
elif (num2 >= num) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number between",num,",",num2,"and",num3,"is",largest)
