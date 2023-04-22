import math

def is_triangle(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        # If the sum of any two sides is greater than the third side,
        # then a triangle can be formed
        return True
    else:
        return False

def triangle_area(a, b, c):
    # Use Heron's formula to calculate the area of a triangle
    s = (a + b + c) / 2
    return math.sqrt(s * (s - a) * (s - b) * (s - c))

# Read three side lengths from the user
a, b, c = map(float, input().split())

if is_triangle(a, b, c):
    area = triangle_area(a, b, c)
    print("{:.2f}".format(area))
else:
    print("0")
