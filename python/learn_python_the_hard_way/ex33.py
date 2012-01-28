def run_the_numbers(limit):
  numbers = []
  for i in range(6):
    print "At the top i is %d" % i
    numbers.append(i)
    print "running the numbers: ", numbers
    print "At the bottom i is %d" % i
  
  return numbers

def show_the_numbers(numbers):
  print "Showing the numbers: "
  for num in numbers:
    print num

i = 0
numbers = []

while i < 6:
  print "At the top i is %d" % i
  numbers.append(i)

  i = i + 1
  print "Numbers now: ", numbers
  print "At the bottom i is %d" % i

show_the_numbers(numbers)

numbers2 = []
for i in range(6):
  print "At the top i is %d" % i
  numbers2.append(i)
  print "Numbers2 now: ", numbers2
  print "At the bottom i is %d" % i

show_the_numbers(numbers2)

show_the_numbers(run_the_numbers(10))