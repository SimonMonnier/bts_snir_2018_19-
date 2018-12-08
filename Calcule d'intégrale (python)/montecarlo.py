from pylab import *

figure(figsize=(10,10), dpi=80)

#mise en place des axes
x = [0, 0,1]
y = [1, 0,0]
grid(True)
title('montecarlo')

#définition de f
def f(t):
    s1 = t*t
    return s1

#construction de la courbe de f
t1 = arange(-1.0, 1.0, 0.01)
l = plot(t1, f(t1), 'g')

#construction de N points différenciés par leur position dessous/dessus la courbe
#évaluer le nombre de rouges par nbrouges et le nombre de bleus par nbrbleus
i = 0;
nbr=0;
nbb=0;

for i in range(1000):
    if i%2 == 0:
        x = random()
        y = random()
    else:
        x = -random()
        y = random()
    if y < f(x):
      plot(x, y,'r+')
      nbr = nbr + 1
    else:
      plot(x, y,'b+')

nbr = nbr/1000

print("l'intégrale vaut environ: ", nbr )
show()
