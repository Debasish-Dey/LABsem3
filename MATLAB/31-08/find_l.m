function largest = find_l(vector, index, current_largest)

    if index > numel(vector)
        largest = current_largest;
        return;
    end


    if vector(index) > current_largest
        current_largest = vector(index);
    end


    largest = find_l(vector, index + 1, current_largest);
end

