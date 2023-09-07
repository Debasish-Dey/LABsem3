x=[0:0.01:10];
y=sin(x);
g=cos(x);
figure
plot(x,y,'b',x,g,'g-')
legend('Sin(x)','Cos(x)')
