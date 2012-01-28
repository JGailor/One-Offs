from sys import argv
import random as rand

def set_global_value_x(val):
  """Sets a global value... terrible"""
  global x 
  x = val

def how_random(lower, upper):
  """Prints a random number"""
  print rand.randint(lower, upper)

def ready_to_go(items):
  if "pants" in clothing and "hat" in clothing and "glasses" in clothing:
    print "All set to go"
  else:
    print "Not so much"

clothing = ["pants", "hat", "glasses"]

ready_to_go(clothing)
del clothing[1]
ready_to_go(clothing)

how_random(1, 1000)

set_global_value_x("Not a chance global variable")
print x