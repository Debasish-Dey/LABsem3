n = input("Enter a number:");
vector =[];
for i =1:n
  element = input(['Enter the elements: ', num2str(i), ':' ]);
  vector = [vector,element];
end


fprintf('Vector elements: ');
print_vector_recursive(vector, 1);
fprintf('\n');

