function result = power(b, e)
    if e == 0
        result = 1;
    else
        result = b * power(b, e - 1);
    end
end

