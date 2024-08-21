% Load the .mat files
file1 = load('spget_og.mat');
file2 = load('spget_output.mat');

% Assuming the variable names are the same in both files
varName1 = fieldnames(file1);
varName2 = fieldnames(file2);

% Check if the variable names match
if ~isequal(varName1, varName2)
    error('The .mat files do not contain the same variable names.');
end

% Extract the variables
data1 = file1.(varName1{1});
data2 = file2.(varName2{1});

% Check if the dimensions match
if ~isequal(size(data1), size(data2))
    error('The dimensions of the variables in the .mat files do not match.');
end

% Compare the values and print differences
[rowCount, colCount] = size(data1);

for i = 1:rowCount
    for j = 1:colCount
        if data1(i, j) ~= data2(i, j)
            fprintf('Row %d Column %d is not the same: file1=%g file2=%g\n', i, j, data1(i, j), data2(i, j));
        end
    end
end

disp('Comparison completed.');

