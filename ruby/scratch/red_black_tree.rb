class BinarySearchTree
  attr_accessor :value, :parent, :left_child, :right_child

  def initialize(value, parent = nil, left_child = nil, right_child = nil)
    @value = value
    @parent = parent
    @left_child = left_child
    @right_child = right_child
  end

  def add(value)
    if !@value or value == @value
      @value = value
    elsif value < @value
      @left_child ? @left_child.add(value) : @left_child = BinarySearchTree.new(value, self)
    else
      @right_child ? @right_child.add(value) : @right_child = BinarySearchTree.new(value, self)
    end
  end

  def merge_tree(node)
    if !@value || node.value == @value
      self.value = node.value
      @left_child = node.left_child
      @right_child = node.right_child
    elsif node.value < @value
      @left_child ? @left_child.merge_tree(node) : @left_child = node
    else
      @right_child ? @right_child.merge_tree(node) : @right_child = node
    end
  end

  def remove(value)
    if value == self.value
      if self.left_child && self.right_child
        successor = find_minimum_path()
      # try the left sub-tree, then the right, and replace myself
      if self.left_child
        old = self.left_child
        self.value = old.value
        self.left_child = old.left_child
        self.merge_tree(old.right_child)
        old = nil
      elsif self.right_child
        old = self.right_child
        self.value = old.value
        self.right_child = old.right_child
        self.merge_tree(old.left_child)
        old = nil
      else
        self.value = nil
        self.parent && self.parent.left_child == self ? self.parent.left_child = nil : self.parent.right_child = nil
      end
    elsif @left_child && value < @value
      @left_child.remove(value)
    elsif @right_child && value > @value
      @right_child.remove(value)
    end
  end

  def internal_remove(moved_child, merged_child)

    self.left_child = old.left_child
    self.merge_tree(old.right_child)
    old = nil
  end

  def find(value)
    return true if value == @value
    return @left_child.find(value) if @left_child and value < @value
    return @right_child.find(value) if @right_child and value > @value

    false
  end

  def in_order
    return (@left_child ? @left_child.in_order : []) + [value] + (@right_child ? @right_child.in_order : [])
  end

  def pre_order
    return [value] + (@left_child ? @left_child.in_order : []) + (@right_child ? @right_child.in_order : [])
  end
  
  def post_order
    return (@left_child ? @left_child.in_order : []) + (@right_child ? @right_child.in_order : []) + [value]
  end
end

class RedBlackTree
  class Node
    module Color
      BLACK = 0
      RED   = 1
    end

    attr_accessor :color
    attr_accessor :value
  end

  def initialize(root_value = nil)
    @root = Node.new(Node::Color::Black, root_value)
  end
end