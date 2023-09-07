n = input("Enter a number: ");
num = 0;
b = n;
while(n)
  d = mod(n,10);
  num = num*10 + d;
  n = floor(n/10);
end
disp(num);
if(num == b)
disp("Palindrome");
else
disp("Not a Palindrome");
end
