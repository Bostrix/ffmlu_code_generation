% Define the paths
original_folder = '/home/user/Documents/ffmlu_code_generation/get_factorization/original';

% Initialize variables to store time and results
original_time = 0;
modified_time = 0;
result_original = [];
result_modified = [];

% Run original get_factorization
cd(original_folder);
disp('Running original get_factorization...');
original_start_time = tic;
result_original = get_factorization(Center, Area,normals, EC, contrast, weight)  % Run with appropriate inputs
original_time = toc(original_start_time);

% Display original run time
disp(['Original get_factorization time: ', num2str(original_time), ' seconds']);
cd ..

modified_folder = '/home/user/Documents/ffmlu_code_generation/get_factorization/modified';

% Run modified get_factorization
cd(modified_folder);
disp('Running modified get_factorization...');
modified_start_time = tic;
result_modified = get_factorization_modified(Center, Area,normals, EC, contrast, weight);  % Run with appropriate inputs
modified_time = toc(modified_start_time);

% Display modified run time
disp(['Modified get_factorization time: ', num2str(modified_time), ' seconds']);

% Compare the results
disp('Comparing results...');
if isequal(result_original, result_modified)
    disp('Results are equal.');
else
    disp('Results are not equal.');
end

