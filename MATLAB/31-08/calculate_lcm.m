function lcm_result = calculate_lcm(a, b)

    if a == 0 || b == 0
        lcm_result = 0;
        return;
    end

    lcm_result = lcm(a, b);
end

