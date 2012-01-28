def add(a,b):
  print "ADDING %d + %d" % (a,b)
  return a + b

def subtract(a,b):
  print "SUBTRACTING %d - %d" % (a,b)
  return a - b

def multiply(a,b):
  print "MULTIPLYING %d * %d" % (a,b)
  return a * b

def divide(a,b):
  print "DIVIDING %d / %d" % (a,b)
  return a / b

print "Let's do some math with just functions!"

age = add(30,5)
height = subtract(78, 4)
weight = multiply(90,2)
iq = divide(100,2)

print "Age: %d, Height: %d, Weight: %d, IQ: %d" % (age, height, weight, iq)

# A puzzle for the extra credit
print "Here is a puzzle:"

# (30 + 5) + ((78 - 4) - ((90 * 2) * (50 / 2)))
# 35 + (74 - (180 * 25))
# 35 + (74 - (4500))
# 35 - 4426
# -4391
what = add(age, subtract(height, multiply(weight, divide(iq, 2))))

print "That becomes -4391, no? %r" % (what == -4391)