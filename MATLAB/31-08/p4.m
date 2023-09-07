n = input("Enter a number:");
vector =[];
for i =1:n
  element = input(['Enter the elements: ', num2str(i), ':' ]);
  vector = [vector,element];
end

disp(vector);
if isvector(vector)
  Max_Min_Vector(vector);
else
  disp("Enter a valid vector");
end
