n = input("Enter the number of digits:");
vector =[];
for i =1:n
  element = input(['Enter the elements: ', num2str(i), ':' ]);
  vector = [vector,element];
end

largest_element = find_l(vector, 1, vector(1));


fprintf('The largest element in the vector is: %d\n', largest_element);

