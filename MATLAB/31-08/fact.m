function result = fact(n)
    if n == 0
        result = 1;
    else
        result = n * fact(n - 1);
    end
end

