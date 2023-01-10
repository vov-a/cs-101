from array import *

class Stack:

  def __init__(self, type, init_value):
    self.elements = array(type, init_value)
    self.counter = 0
    self.capacity = len(init_value)

  def size(self):
    return self.counter

  def empty(self):
    return self.counter == 0

  def peek(self):
    if self.empty():
      return None
    else:
      return self.elements[-1]
  
  def push(self, data):
    if self.counter != self.capacity:
      self.elements.append(data)
      self.counter += 1
    else:
      return None

  def pop(self):
    if self.empty():
      return None
    else:
      self.counter -= 1
      return self.elements.pop()

