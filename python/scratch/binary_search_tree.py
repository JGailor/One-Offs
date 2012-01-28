# Node class
class TreeNode(object):
  def __init__(self, left, key, value, right):
    self.left = left
    self.key = key
    self.value = value
    self.right = right

# Searching the binary search tree
def binary_tree_search(node, key):
  # 1. Does this node exist: if not, we don't have a BST hence
  #    the value isn't here
  if node is None:
    return None
  
  # 2. Is the key being searched for the same key that this node stores?
  #    If so, return this nodes value
  if key == node.key:
    return node.value

  # 3. Is the key being searched for less than the key that this node stores?
  #    If so, go left down the tree
  if key < node.key:
    return binary_tree_search(node.left, key)

  # 4. At this point, the node exists, the nodes key is not equal to the
  #    key being searched for, and the key we want is greater than this
  #    nodes key.  Go down the right sub-tree
  else:
    return binary_tree_search(node.right, key)

# Inserting into the binary search tree
def binary_tree_insert(node, key, value):
  if node is None:
    return TreeNode(None, key, value, None)

  if key == node.key:
    return TreeNode(node.left, key, value, node.right)

  if key < node.key:
    return TreeNode(binary_tree_insert(node.left, key, value), node.key, node.value, node.right)
  else:
    return TreeNode(node.left, node.key, node.value, binary_tree_insert(code.right, key, value))

