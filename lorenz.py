import math
import random


def lorenz(loc=0, scale=1):
    rnd = random.random()
    return loc+scale*math.tan(math.pi*(rnd-0.5))


print(lorenz())
