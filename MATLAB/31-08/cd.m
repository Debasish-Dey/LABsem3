function digitCount = cd(n)
    if n < 10
        digitCount = 1;
    else
        digitCount = 1 + cd(floor(n / 10));
    end
end

