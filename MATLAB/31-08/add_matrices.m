function result = add_matrices(m1, m2)

    if size(m1) == size(m2)
        result = m1 + m2;
    else
        error('Matrices must have the same size for addition.');
    end
end

