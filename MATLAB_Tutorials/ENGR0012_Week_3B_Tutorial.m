%% Week 3B
%% Revisit disp

A = 5.145;

% You shouldn't mix the vector with two types string and numerical
disp(['A`s value is: ', A])
% Also try yourself
disp(["A`s value is: ", num2str(A)])    % Note the double quotes
disp(['A`s value is: ', num2str(A, 3)]) 
%% 
% Another useful feature when working on _*Command Window*_, you may use upper 
% arrow ↑ to quickly retrive your history commands.
%% Revisit: Linspace and Colon methods

% Create a vector 'c' starting from 1 to 12 with a step size of 1
c = 1:12 % same as C=1:1:12, when step=1, it can be omitted
%%
% Step can be negative too
d = 15:-4:7
%%
% Ending point is not always included
e = 15:-4:0
%% IMPORTANT: Access/Modify Individual Elements in Vector/Matrix
%% 
% Let's build a large matrix first

A_large = [0.1 0.02 0.3 40 5 600;8 9 11 12 13 16;1 -2 4 -8 5 -9;-67 -90 3 5.89 5.12 611;36 100 31 7 3 6.11;-1.414 3.1415 2.8 90 3.45 6.189]
%%
%Try this first
A_large([1 2], [1 2])
%% 
% You notice that we just extract the the first two rows and first two columns 
% of the matrix

%Try this next
A_large([1 5 6], [3 4])
%% 
% This time, we extract the the (1st & 5th & 6th rows) and (3rd & 4th columns) 
% of the matrix

% Recall that 2:5 = [2,3,4,5]
% 2:2:6 = [2,4,6]

% Try these:
A_large(2:5, 4) % from 2 to 5th rows, 4th cols
A_large(1, 2:2:6) % 1st row, and from 2 to 6, extract every other cols,
A_large(2:5, 2:2:6)
%%
% One more useful feature of using colon
% Try this:
A_large(2,:)
A_large(:,6)
%% 
% When putting just a colon on either row or column field of a matrix, it returns 
% all entries of that dimension
% Bulk Modify

% Bulk modify the elements
A_large(:,6) = 8;
A_large
%%
% Bulk modify the elements
A_large([4,5],6) = [9; 10];
A_large(1,[4,5,6]) = [412, 413, 414];
A_large
% Modify Out-of-bound

% Try to access out-of-bounds element
%x = A_large(1,9)
%y = A_large(8,2)
%%
% Try to modify out-of-bounds element
A_large(1,9) = 3.14;
A_large
%%
% Try to modify out-of-bounds element
A_large(8,2) = 3.14;
A_large
%% 
% An attempt to modify an out-of-bound element would just increase the size 
% of matrix and fill the unassigned elements to 0s

A_large(:,:) % no need to access in such a way, same as A_large
A_large(:) % obtain a column vector of all entries
A_large(:)' % obtain a row vector of all entries, we will learn ' transpose very soon
%% Concatenate vectors of strings

%str_vec = ['I', 'enjoy', 'MATLAB'];
str_vec = ['I ', 'enjoy ', 'MATLAB '];
horzcat(str_vec)
%% num2str
% Convert a number to a string

num = 12;
num2str(num)
%%
disp(['The number as a string is: ', num2str(num)]); % str can be viewed as an array/vector of char
%%
str_vec2 = ['from ', 'ENGR', num2str(num)];
horzcat(str_vec, str_vec2)
%% Rounding Commands

num = 3.1415926;
round(num)
ceil(num)
floor(num)
fix(num)
fix(-1.49999)
matrix_r = [0.5001, -0.4999; 1.501, 1.999]
fix(matrix_r)
%% Generate Random Numbers

% Generate a random number between 0 and 1
rand
%%
% Generate a row vector of 5 random numbers between 0 and 1
rand_num = rand(1, 5)
% Example output: [0.8147 0.9058 0.1270 0.9134 0.6324]
rand(3,2)
%%
% Generate a random integer between 1 and 100
randi(100)
%%
% Generate a row vector of 5 random integers between 1 and 100
randi_num = randi(100, [1,5])
%%
randi(100, 3)
%%
% Generate a row vector of 8 random integers between -10 and 15
randi([-10,15], [1,8])
%% Statistics Functions

% Let's first generate a row vector of 52 random integers from 60 to 100
% assume it is the final grade of our ENGR12 course
grades = randi([60,100], [1, 53])
%%
avg_grd = mean(grades);
median_grd = median(grades);
mode_grd = mode(grades);
stdev_grd = std(grades);
var_grd = var(grades);

avg_grd, median_grd, mode_grd, stdev_grd, var_grd
%%
% note that stdev ^ 2 = var
test1 = (stdev_grd^2 == var_grd)
test2 = abs(stdev_grd^2-var_grd)<0.0000001
%test1, test2 % will study true and false later!
%% Revisit: Load, input in MATLAB
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
%% If-elseif-else-end statement
% if (Condition 1)
% 
% do thing 1
% 
% elseif (Condition 2)
% 
% do thing 2
% 
% elseif (do thing 3)
% 
% do thing 3
% 
% ......
% 
% else
% 
% do thing n
% 
% end
% 
% Underlined parts have to be there, others can be omitted as pair

% Temperature Control Example
temperature = 75; % Example temperature value

if temperature < 60
    disp('The temperature is cold.')
elseif (temperature >=60 && temperature <=90)
    disp('The temperature is moderate.')
else
    disp('The temperature is hot.')
end
%%
% Another example with user input
temp = input("please input a temp: ")
if temp < 60
    disp('The temperature is cold.')
elseif (temp >=60 && temp<=90)
    disp('The temperature is moderate.')
else
    disp('The temperature is hot.')
end