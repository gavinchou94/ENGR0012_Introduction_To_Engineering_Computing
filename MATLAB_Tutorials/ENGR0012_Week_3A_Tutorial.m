%% Week 3A
%% Misc: disp, clear, clc, display, path, addpath

% Random messy codes
A = 5.145;
B = [4, 6; 9, 12];
%%
% Display to screen
disp(B)
%%
% Display more information:
disp(['A`s value is: ', num2str(A)])
%%
% Clear workspace
clear;
%%
% Clear command window
clc;
%% 
% Display all MATLAB search path for scripts. It will be a lot for MATLAB online

%path
%%
% Add a path
% e.g. you want to run a script stored at this folder
addpath("/MATLAB Drive/somefolder/");
%% 
% By default, MATLAB Drive root folder is already in the path
% 
% Adding a path is usually done with the GUI by either copying file to the working 
% folder
% 
% Or right click the desired file and choose "add to path" on MATLAB desktop
%% 
% Another useful feature when working on _*Command Window*_, you may use upper 
% arrow ↑ to quickly retrieve your history commands.
%% Linspace and Colon methods

% Create a vector 'v' with 101 linearly spaced points between 0 and 1
v = linspace(0, 1, 101)
%% 
% The first few elements of |v| would be v = [0, 0.01, 0.02, 0.03, ..., 0.99, 
% 1]
% 
% Note the choice of 101, instead of 100.
% 
% Quiz yourself: linspace(0,1,5) would yield [0, 0.2, 0.4, 0.6, 0.8, 1] or [0, 
% 0.25, 0.5, 0.75, 1]

% Create a vector 'arr' with 6 linearly spaced points between 5 and 30
arr = linspace(5, 30, 6);

% Example: The elements of 'arr' would be:
% arr = [5, 10, 15, 20, 25, 30]
%%
% Create a vector 'b' starting from 1 to 3 with a step size of 0.2
b = 1:0.2:3
%% 
% The elements of |b| would be: b = [1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 2.6, 
% 2.8, 3]
%% Creating Ones and Zeros Matrices

h = ones(3)  % Creates a 3x3 square matrix filled with ones
j = zeros(4) % Creates a 4x4 square matrix filled with zeros
%%
matOne = ones(2, 3) % Creates a 2x3 matrix filled with ones
matZero = zeros(5, 2) % Creates a 5x2 matrix filled with zeros
%%
i4 = eye(4) % Creates a 4x4 identity matrix
% Get the dimensions of arrays

% “size” gives length of all matrix dimension
% “length” gives the length of largest array dimension

size(matZero)
length(matZero)
%% Access/Modify Individual Elements in Vector/Matrix

% Recall d
disp(i4)
%%
element_23 = i4(2, 3) % Access the element in the 2nd row, 3rd column of matrix 'i4'
element_11 = i4(1,1) % Access the element in the 1st row, 1st column of matrix 'i4'
%%
% Recall h
disp(h)
%%
% Modify individual elements in an array
h(2,3) =10; % Set the element in the 2nd row, 3rd column of matrix 'h' to 10
h(1,1) =5;  % Set the element in the 1st row, 1st column of matrix 'h' to 5 
h
%% Perform Matrix Operations

A = [1 2; 3 4]
B = [5 6; 7 8]
%%
% Matrix +-*/ scalar
A+100, A-99, A*0.01, A/2
%%
% Scalar +-* matrix
200+A, -20-A, 0.001*A
%%
% Element-wise operations + - .* ./ .^
C_ele_add = A + B;  % A_i + B_i
C_ele_sub = A - B;  % A_i - B_i
C_ele_mul = A .* B; % A_i * B_i
C_ele_div = A ./ B; % A_i / B_i
C_ele_pow = A .^ B; % A_i ^ B_i
C_ele_add, C_ele_sub, C_ele_mul, C_ele_div, C_ele_pow
%% 
% In Element-wise operations:
%% 
% * order matters
% * A, B matrices have to match size

% Matrix multiplication
C_mul = A * B; % same as excel mmult
C_mul_diff = B * A; % linear algebra says A*B not always equal to B*A
C_mul, C_mul_diff
%% 
% If A is in dimension |m*n|, B is in dimension |s*t|. n has to be equal to 
% s (|n=s|) so that A*B is doable

disp(A)
A_transpose = A' % or A_transpose = transpose(A)
A_inverse = inv(A) % matrix inverse or A_inverse = A^(-1)
%%
B = [2,3;4,5;6,7]
B_transpose = B'
%%
% Verify yourself
% A_inverse * A, A * A_inverse
%% Concatenate arrays

A = [1, 2; 3, 4]
B = [5, 6; 7, 8]
C_vertcat = vertcat(A,B) % another way is just C_vertcat = [A;B]
%%
% C_vertcat will be:
%  1  2
%  3  4
%  5  6
%  7  8

D = [100, 200; 100, 300; 100, 400];
vertcat(C_vertcat, D)
%%
vertcat(D, C_vertcat)
%%
A = [1, 2; 3, 4];
B = [5, 6; 7, 8];

C_horzcat = horzcat(A, B) % another way is just C_horzcat = [A,B]
% C_horzcat will be:
%  1  2  5  6
%  3  4  7  8

E = [0.1, 0.2, 0.3; 0.4, 0.5, 0.6]
horzcat(C_horzcat, E)
%% 
% Make sure that A and B have compatible dimensions for these operations:
%% 
% * For vertcat, A and B must have the same number of columns.
% * For horzcat, A and B must have the same number of rows
%% num2str
% Convert a number to a string

num = 12;
num2str(num)
%%
disp(['The number as a string is: ', num2str(num)]); % str can be viewed as an array/vector of char
%%
%str_vec = ['I', 'enjoy', 'MATLAB'];
str_vec = ['I ', 'enjoy ', 'MATLAB '];
horzcat(str_vec)
%%
str_vec2 = ['from ', 'ENGR', num2str(num)];
horzcat(str_vec, str_vec2)
%%
% Convert a matrix to a string
matrix = [1.1, 2.2; 3.3, 4.4]
matrix_str = num2str(matrix) %fix-width on each row
matrix_b = [1, 100, 2.04; 7, 8, -9]
matrix_b_str= num2str(matrix_b) %fix-width on each row
%% Rounding Commands

num = 3.1415926;
round(num)
ceil(num)
floor(num)
fix(num)
fix(-1.49999)
matrix_r = [0.5001, -0.4999; 1.501, 1.999]
fix(matrix_r)
%% Save and Load in MATLAB

% Create some sample data
sample_data = rand(5, 5);
sample_text = 'Hello, MATLAB!';

% Save the data to a MAT file
save('sample.mat', 'sample_data', 'sample_text');
save('all.mat');
%%
% Load the data from the MAT file

clear; % to verify the functionality of load below
load('sample.mat'); % you can also double-click to load
%% 
% Supposing you have created a data.txt and put inside
% 
% 1, 2, 3, 4
% 
% 5, 6, 7, 8
% 
% 9, 10, 11, 12
% 
% 13, 14, 15, 16
% 
% Supposing you have created a data2.txt and put inside
% 
% -1, -2, -3, -4
% 
% -5, -6, -7, -8
% 
% -9, -10, -11, -12
% 
% -13, -14, -15, -16

data = load('data.txt')
%% 
% Load from user input

x = input("please input x between 1~4: ");
y = input("please input y between 1~4: ");
%% 
% Load from user input as string

file = input("please input file name to import: ", 's');
result = load(file);
%%
% A small interface:
disp(['The element you inquired at Row ', num2str(x), ' Column ', num2str(y), ' of file ', file, ' is: ', num2str(result(x,y))])