clear all
X=[3 9 27];
Y=[10 8 6];
Z=[4 4 4];
t=[1 2 3];
figure
hold on
plot(t,X,'blue',t,Y,'red',t,Z,'green')
title('Plot of Distance over Time')
ylabel('Distance(m)')
xlabel('Time(s)')
legend('Trial 1','Trial 2', 'Trial 3')
upper left
