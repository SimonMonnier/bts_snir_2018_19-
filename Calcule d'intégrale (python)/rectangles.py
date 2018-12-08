from pylab import *
figure(figsize=(10,10), dpi=80)
title('rectangles')

grid(True)

#définition de f
def f(t):
    s1 = exp(-t)
    return s1

#construction de la courbe de f
t1 = arange(0.0, 1.0, 0.01)
l = plot(t1, f(t1), 'b')

#largeur des rectangles
dx=0.1

#construction des rectangles 
x=0
aireT = 0
aireR = 0
aireV = 0

while x<(1-dx):
  x_rect = [x,x+dx,x+dx,x,x] # abscisses des sommets
  y_rect = [0,0,f(x),f(x),0 ] # ordonnees des sommets
  plt.plot(x_rect, y_rect,"r")
  aireR = f(x)  * dx + aireR
  x=x+dx

x=0
dx=0.1

while x<(1-dx):
  x_rect = [x,x+dx,x+dx,x,x] # abscisses des sommets
  y_rect = [0,0,f(x+dx),f(x+dx),0 ] # ordonnees des sommets
  plt.plot(x_rect, y_rect,"g")
  aireR = f(x)  * dx + aireR
  x=x+dx

#calcul de l'aire
aireT = ((aireR - aireV)/2) + aireV


print("l'aire est d'environ: " , aireT)
show()