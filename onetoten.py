import turtle

t = turtle.Turtle()

start_point = (0, 0)
end_point = []
dot_size = 5

for i in range(1, 10):
    x = 0 + i * 10
    y = 0
    end_point = end_point + [(x, y)]