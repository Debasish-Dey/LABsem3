function print_vector_recursive(vector, index)

    if index > numel(vector)
        return;
    end


    fprintf('%d ', vector(index));


    print_vector_recursive(vector, index + 1);
end

