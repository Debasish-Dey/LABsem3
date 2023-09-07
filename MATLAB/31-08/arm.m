function isArm = arm(n)
    d = numel(num2str(n));

    sum = sum(arrayfun(@(x) x^d, num2str(n) - '0'));

    isArm = (n == sum);
end

