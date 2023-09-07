function[largest] = Max_Min_Vector(vec)
largest = vec(1);
smallest= vec(1);
for i =2:length(vec)
  if vec(i)>largest
    largest = vec(i);
  end
  if vec(i)<smallest
    smallest = vec(i);
  end
end
fprintf("The largest number is : %d",largest);
disp("\n");
fprintf("The smallest number is: %d\n", smallest);

end
