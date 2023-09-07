function isPrime = prime(n, div)
    if div == 2
        isPrime = (mod(n, 2) == 1);
        return;
    end

    if mod(n, div) == 0
        isPrime = false;
        return;
    end

    isPrime = prime(n, div - 1);
end

