%% Week 2 Tutorial
%% Variables in MATLAB
% A variable is a place in computer memory where data is stored and can later 
% be referenced by a particular name that we assign.
% 
% Variables can be defined in both the _*Command Window*_ or a _*Script Window*_ 
% (live script window), depending on the user’s needs. All variables that we create 
% will be reflected in the _*Workspace Window*_, which helps us keep track of 
% variable definitions and their current values. Variable created in Command Window 
% For example, in the command window, let's create the variable |alpha|

% Try alpha=412 in Command Window
%%
% Variable created in (Live) Script Window
% For example, in this window (the following block), let's create the variable beta
%%
% Try beta=200 in this block
beta = 200
% Check right-> if you are running live .mlx file, or below if .m file
%%
% Variable can be modified
% Let's modify the variable |alpha| to be 4.12
alpha = 4.12
%%
% Variable Echo and Suppress
% Output can be suppressed by adding a semicolon to terminate the line of code. 
% For example, if you define |gamma = 87| and add a semicolon
gamma = 87;
% Check right-> if you are running live .mlx file, or below if .m file
% no variable echo now
%% 
% The same if you define |gamma2 = 8.7| in the _*Command Window*_ and add a 
% semicolon

% Try gamma2=8.7; in Command Window
%% 
% Note that these suppressed variables are still defined in the _*Workspace*_ 
% Scalar Computation Adding the values stored in |alpha| and |beta|. Run |alpha 
% + beta| without a semicolon

% Try adding alpha and beta
alpha+beta
%% 
% |ans| is the default variable used by MATLAB to temporarily hold the results 
% of a calculation when the final result is not stored in a variable. Note that 
% |ans| has now been defined as a variable since it exists in our workspace. By 
% "temporarily", it means its contents are rarely accessible and can very easily 
% be overwritten.

% Try adding alpha and beta; 
% and on the next line, adding gamma and gamma2
alpha+beta
gamma+gamma2
%% 
% Now, where is the sum result of |alpha + beta?| 
%% Scalar vs. Vector vs. Matrix
% MATLAB also allows us to store data as a one-dimensional vector or a two-dimensional 
% matrix. These are defined similarly to scalars using the assignment operator 
% |=|.
% 
% Let's define |A| to be a vector of 1, 5, 6, 8.

% Define A in this block
A = [1,5,6,8]
%% 
% We see now that variable |A| exists in our workspace. and it shows |1x4,| 
% referring to the dimensions: one row and four columns of data.
% 
% Let's redefine |A| to be a *row vector* of 1.2 -87 3.5 7.8 -12

% Define A in this block but with space instead of comma
A = [1.2 -87 3.5 7.8 -12]
%% 
% It has been changed to one row and five columns.
% 
% To be consistent, let's not create a row vector using both comma and space 
% to delimit, although there is no error to do so.
%% 
% Let's define B to be a *column vector* of 100 200 300

% Define B in this block
B = [100; 200; 300]
%% 
% Note that it is separated by semicolon ;
%% 
% If we want to create a matrix: C = 1 2 3 4 5 6, like 2 rows, 3 columns

% Define C in this block
C=[1,2,3;4,5,6]
%% 
% Want to check whether C really has *2 rows and 3 columns*, instead of 3 rows, 
% 2 columns;

% check C's dimension here
size(C)
%% 
% A matrix cannot have mismatched dimension on different rows, 
% 
% e.g. 1 2 3 4 // 7 8 9 //10 11 12 13

% Make C to be 1 2 3 4 // 7 8 9 // 10 11 12 13
%C = [1, 2, 3, 4; 7,8,9; 10, 11, 12, 13]
%% Char and Strings

% You can assign char 'A' to a variable, as well as string "abcd" to a variable
var1 = 'A';
var2 = "abcd";
%% 
% Check Workspace window for the |var1, var2| values and CLASS
%% 
% Note that this is different than assign A to var1, which would just copy variable 
% A's value to var1

% copy variable A to var1
var1 = A
%% Create, Run, Save m-files (Scripts)
% An m-file is a script or function saved with a .m extension. It allows you 
% to save your code and run it as a script. 
% 
% To create an m-file, follow these steps:
%% 
% # Open MATLAB and go to the Home tab. 
% # Click on "New Script" to open the editor.
% # Write your MATLAB code in the editor. 
% # Save the file with a .m extension, for example, `classwork0116.m`.
% # To run the script, you can either click the "Run" button in the editor or 
% type the name of the script (without the .m extension) in the Command Window 
% and press Enter.

% Let's create a simple script that calculates the sum of two numbers and displays
% the result. Save the following code in a file named `classwork0116.m`:
%%
% a = 5;
% b = 10;
% result = a + b;
%% 
% To run the script, type `classwork0116` in the Command Window and press Enter.
%% 
% To save an m-file, use the "Save" button in the editor or press Ctrl+S.
% 
% You can find m-files in the Current Folder window or by using the `dir` command 
% in the Command Window.
%% Incorporate Comments in Code
% Comments are added using the % symbol. Everything after % on the same line 
% is ignored by MATLAB.
% 
% For example:

% This is a comment
% a = 5; % This is an inline comment
%%
% The following line is not commented
a = 10
%% MATLAB Variable Naming Conventions
% Variable names in MATLAB must follow these rules: 
%% 
% * Start with a letter. 
% * Can contain letters, numbers, and underscores. 
% * Cannot contain spaces or special characters. 
% * Are case-sensitive (e.g., `Var` and `var` are different variables).

% Examples of valid variable names:
validVar1 = 10;
valid_var2 = 20;
validVar3 = 30;
%%
% Examples of invalid variable names:
% 1invalidVar = 40; % Starts with a number
% invalid-var = 50; % Contains a hyphen
% invalid var = 60; % Contains a space
%%
% MATLAB keywords cannot be used as variable names. For example:
% if = 70; % 'if' is a keyword
%% 
% It is good practice to use meaningful variable names that describe the data 
% or purpose of the variable, instead of random names like x, y, z, etc.
%% Basic Mathematical Operations
% Examples of sqrt, abs, exp, log, log10, sum, prod, min, max, sort, rem, mod, 
% sin, cos, tan

% sqrt: square root of a number
sqrt_val = sqrt(16); % sqrt_val will be 4
%%
matrix = [4, 9; 16, 25];
% sqrt_matrix will be a matrix with the square roots of the original matrix elements
sqrt_matrix = sqrt(matrix)
%%
% abs: absolute value of a number
abs_val = abs(-5); % abs_val will be 5
%%
% exp: exponential of a number
exp_val = exp(1); % exp_val will be approximately 2.7183
% this is a way to get access to natural number e

% exp(vector) will return the exponential of each element in the vector
%%
% log: natural logarithm of a number
log_val = log(10); % log_val will be approximately 2.3026
% log(vector) will return the natural logarithm of each element in the vector
%%
% log10: base-10 logarithm of a number
log10_val = log10(100); % log10_val will be 2
%%
% sum: sum of elements in a vector
sum_val = sum([1, 2, 3, 4]) % sum_val will be 10
%%
% sum: sum of elements in a column vector
B = [100; 200; 300];
sum_col = sum(B) % sum_col will be 600
%%

%%
% sum of elements in a matrix
C = [1, 2, 3; 4, 5, 6]
sum_matrix = sum(C) % sum_matrix will be [5, 7, 9]
% what if we want to sum the elements in each row?
sum_matrix_row = sum(C, 2) % sum_matrix_row will be [6; 15]
% what if we want to sum the elements all together?
sum_matrix_all1 = sum(sum(C)) % sum_matrix_all will be 21
sum_matrix_all2 = sum(C, 'all') % sum_matrix_all will be 21
%%
% prod: product of elements in a vector
prod_val = prod([1, 2, 3, 4]); % prod_val will be 24
%%
% min: minimum value in a vector
min_value = min([1, 2, 3, 4]) % min_val will be 1
% You can also return not only the minimum value but also the index of the minimum value
[min_val, min_index] = min([1, -2, 3, 4]) % min_val will be -2 and min_index will be 2
%%
% max: maximum value in a vector
max_value = max([10, 2, 3, 4]) % max_val will be 10
%%
% sort: sort elements in a vector
sorted_val = sort([40, 3, 20, 1]) % sorted_val will be [1, 3, 20, 40]
sorted_val_desc = sort([40, 3, 20, 1], 'descend') % sorted_val_desc will be [40, 20, 3, 1]
%%
% rem: remainder after division
rem_val = rem(10, 3); % rem_val will be 1
% the limit of rem is that it only works for integers
%%
% mod: modulus after division
mod_val = mod(10, 3); % mod_val will be 1
% the limit of mod is that it only works for integers
%%
% sin: sine of an angle in radians
sin_val = sin(pi/2)
%%
% cos: cosine of an angle in radians
cos_val = cos(pi)
%%
% tan: tangent of an angle in radians
tan_val = tan(pi/3) % tan_val will be sqrt(3)
%% 
% The above functions are just a few examples of the mathematical operations