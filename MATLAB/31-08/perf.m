function isPer = per(n)
    sumDivisors = 0;

    for i = 1:n/2
        if mod(n, i) == 0
            sumDivisors = sumDivisors + i;
        end
    end

    isPer = (n == sumDivisors);
end

