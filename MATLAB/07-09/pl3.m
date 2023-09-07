clear all
x=[0:0.01:5];
figure
y=(exp(-1.5*x).*sin(10*x))
z=(exp(-2*x).*sin(10*x))

plot(x,y,'r',x,z, 'b--')
title('Plot Between X and Y and Between X and Z');
xlabel('Range of X');
ylabel('Expression');
legend('exp(-1.5*x).*sin(10*x)','exp(-2*x).*sin(10*x)');
