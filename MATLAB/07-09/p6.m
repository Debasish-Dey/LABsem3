clear all
close all
% subplot (nrows,ncols,plot_number)
x=0:.1:2*pi; % x vector from 0 to 2*pi, dx = 0.1
subplot(2,2,1); % plot sine function
plot(x,sin(x));
title('sin(x)')
subplot(2,2,2); % plot cosine function
plot(x,cos(x));
title('cos(x)')
subplot(2,2,3) % plot negative exponential function
plot(x,exp(-x));
title('exp(-x)')
subplot(2,2,4); % plot x^3
plot(x, x.^3);
title('x3')

