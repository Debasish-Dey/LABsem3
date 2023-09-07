clear all
x=[0:0.01:5];
figure
y=(exp(-2.0*x).*sin(10*x))

plot(x,y)
title('Plot Between X and Y');
xlabel('Range of X');
ylabel('Expression');

