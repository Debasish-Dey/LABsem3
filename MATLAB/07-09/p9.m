x = (1:0.01:5);
xlabel('x');
ylabel('sin(x*pi)');
plot(x, sin(x*pi));
hold on
plot(x, cos(x*pi), 'r--');
legend('sin','cos', 'Location','northwest');
