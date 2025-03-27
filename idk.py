import random
import turtle

t = turtle.Turtle()

def drawRhombus(center, width, height, direction):
  t.position(center)
  

   center = random.randint()
    width = random.randint
    height = random.randint
    direction = random.random(t.forward(random.randint()), t.left, t.right, t.backwards)
    t.position = center
    t.shapesize = width * height
    t.direction = direction
fillcolor(random.randint(255,255,255))
right(random.randint())
begin_fill()
for count in range(4):
  forward(random.randint())
  right(random.randint())
  end_fill()
