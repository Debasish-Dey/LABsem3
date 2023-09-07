n = input("Enter a number: ");

isArm = arm(n);
isPer = per(n);

if isArm && isPer
    fprintf('%d is both an Armstrong number and a Perfect number.\n', n);
elseif isArm
    fprintf('%d is an Armstrong number but not a Perfect number.\n', n);
elseif isPer
    fprintf('%d is a Perfect number but not an Armstrong number.\n', n);
else
    fprintf('%d is neither an Armstrong number nor a Perfect number.\n', n);
end

