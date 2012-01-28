from sys import exit

def die(msg):
  print msg
  exit(0)

def prompt():
  """Prompts the user for input"""
  return raw_input("> ")

def start():
  action = entrance

  while True:
    action = action()

def entrance():
  """Entrance to the dungeon, can go west to r1, north to r5, and east to r11"""
  print "*** Welcome to the Dungeon of Exeter's Demise ***"
  print "As you step through the mouth of the cave you find yourself in a room with walls of rough hewn rock."
  print "A few bootmarks in the dust indicate that you are not the only one to try your mettle here."
  print "To the west is a doorway leading down a hallway that turns sharply to the north."
  print "To the north is a hallway that leads through a set of small ante-chambers lit by torches."
  print "To the east is a hallway stretching off into the darkness."
  print "\nWhat would you like to do?"

  while True:
    action = prompt()

    if action == "go west":
      return r1
    elif action == "go north":
      return r5
    elif action == "go east":
      return r11
    else:
      print "I don't know what that means..."
      print "What would you like to do?"

def r1():
  """Big room with a fountain in it"""
  die("You died...")

def r2():
  """T-Junction in a hallway, can go north to r3, south to r4, or east back to r1"""

def r3():
  """Room full of skeletons.  Some treasure scattered about. Can turn back to r2"""

def r4():
  """Room with a secret door.  Can search for the secret door to go directly to the last room r22, or turn back south to r2"""

def r5():
  """A simple ante-chamber with a path leading north to r6, or south back to the entrance"""
  die("You died...")  

def r6():
  """A simple ante-chamber with a skeleton in it.  Paths leading north to r7 or south back to r5"""

def r7():
  """A large, bi-sected room.  If looking east, sees a bookshelf with a tome about the dungeon.  Looking west he sees a door, closed.  
     Can follow the door north to r8 or go back south to r6"""

def r8():
  """Small room with a couple of dusty vials.  Can go east to r9 or back south to r7"""

def r9():
  """A room with a single locked door heading west to r10.  Can also turn back south to r8"""

def r10():
  """A room with a big treasure chest.  Can go east to r9"""

def r11():
  """A junction in a hallway.  Can turn south to r12, east to r13, or west to the entrance"""
  die("You died...")  

def r12():
  """A caved in tunnel.  Can go north to r11"""

def r13():
  """The guards quarters.  Several guards are asleep here, with two playing cards at a table in the rear.
     Can go north to r14 or back south to r11"""

def r14():
  """A junction in a hallway.  Can go west to r15, north to r16, or south to r13"""

def r15():
  """The kitchen.  There is a pot of something foul smelling boiling over a fire.  Can go east to r14"""

def r16():
  """A storage area, several wardrobes are filled with musty clothes.  Can go south to r14 or north to r17"""

def r17():
  """A junction in the hallway.  Can go west to r18, north to r19, or south to r16"""

def r18():
  """The jail. A row of cells stands along the back walls.  Can go east to r17"""

def r19():
  """A temple.  Foul things hang from chains.  Can go west to r20, or south to r17"""

def r20():
  """T-Junction in a hallway.  Can go east to r22, south to r19, or north to r21"""

def r21():
  """This is a dead end after a long maze, and contains a trap.  Poison gas.  You are dead"""

def r22():
  """There is a dragon in this large throne-room.  He sits on a giant pile of treasure.  You can leave west
     via a secret door to r4 or east to r20"""

start()