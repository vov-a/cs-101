from array import *

class Stack:

  def __init__(self, type, size):
    self.elements = array(type, size)
    self.counter = 0

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
    self.elements.append(data)
    self.counter += 1

  def pop(self):
    if self.empty():
      return None
    else:
      self.counter -= 1
      return self.elements.pop()

