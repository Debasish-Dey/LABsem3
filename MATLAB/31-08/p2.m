n = input("Enter a number: ");

div = floor(sqrt(n));
isPrime = prime(n, div);

if isPrime
    fprintf('%d is a prime number.\n', n);
else
    fprintf('%d is not a prime number.\n', n);
end

