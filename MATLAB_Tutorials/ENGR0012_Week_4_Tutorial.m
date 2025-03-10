%% Week 4
%% Load Text Files, Save to Variable

mydata = load('datafile.txt')
%% 
% if datafile.txt is 4 5 6 7, mydata will be a 1x4 vector

% default variable name after loading
load('datafile.txt');  % it creates a variable named 'datafile'
%% User input string and input numbers
% Prompt user for a string input and number input

userString = input('Enter a string: ', 's'); % check workspace

% Prompt user for a numeric input
userNumber = input('Enter a number: '); % check workspace
%% Relation Operators (>, <, >=, <=, ==, ~=)

a = 5;
b = 10;

% Examples of logical Class: check workspace!
f1 = (a > b); % false
f2 = (a < b); % true
f3 = (a == b); % false
f4 = (a ~= b); % true
f5 = (a >= b); % false
f6 = (a <= b); % true
%%
if a > b
    disp('a is greater than b');
else
    disp('a is not greater than b');
end
if f2
    disp('a is less than b');
else
    disp('a is not less than b');
end
%% Logic Operators (&&, ||, ~)
%% 
% * Both statement 1 AND statement 2 are true:  s1 && s2 
% * At least one of statement 1 OR statement 2 is true:    s1 || s2
% * NOT statement 1 is true:   ~s1

valid1 = (userString == "hello" || userString == "hi");
%%
% TODO1: valid2 denotes that userNumber is between 50 and 100 (inclusive)

% Answer:

valid2 = (userNumber <=100 && userNumber >= 50);
%%
valid3 = ~(a>b);
%% If-end statement, If-else-end, If-elseif-else-end

temperature = 75;

if temperature < 60
    disp('The temperature is cold.')
elseif (temperature < 90 && temperature >= 60)
    disp('The temperature is moderate.')
else
    disp('The temperature is hot.')
end
%% Switch Case
% switch var 
% 
% case value1 
% 
% statement1 
% 
% case value2 
% 
% statement2 
% 
% otherwise
% 
% statement3

day = input('Enter a number (1-7) to represent the day of the week: ');
switch day
    case 1
        disp('Monday')
    case 2
        disp('Tuesday')
    case 3
        disp('Wednesday')
    case 4
        disp('Thursday') 
    case 5
        disp('Friday')
    case {6, 7}
        disp('Weekends')
    otherwise
        disp('Invalid input. Please enter a number between 1 and 7.')
end
%% While-loop
% Example: buffet-eat strategy

full_stomach = 10; % 10 plates
eaten = 0;
while (eaten < full_stomach)

    plates = input('How many more plates do you want to eat? ');
    eaten = eaten + plates;

end
disp('You are finally full!');
%% 
% |while (condition)|
% 
% |Statement block that could change the condition| 
% 
% |end|
% 
% 
% 
% Each time executing the statement block, check the condition again
% 
% If the condition is still true, execute the statement block again
% 
% otherwise, exit the while-loop
%% 
% Example: use while-loop to go through vector element

vec = randi([-5, 5], 1, 10); % random integer vector

i = 1;
while (i<= length(vec))
    disp(vec(i));
    i = i + 1;
end
%% For-loop
% Example: use for-loop to go through vector element

% TODO2: every 3rd element of vec 1 4 7 10

% Answer:

for i = 1:3:length(vec)
 disp(vec(i))
end
%% 
% |for var = start:increment:end| or |for var = start:end| or |for var = [x1 
% x2 x3 ...]|
% 
% |statement block related to var or not|
% 
% |end|

for x = [0, pi/4, pi/2, 3*pi/4, pi]
    disp(sin(x));
end
%%
% TODO3: use for-loop to display the sqrt of all integers from 2020 to 2030

% Answer:

for i = 2020:2030
    disp(sqrt(i))
end
%%
% Try: for-loop to find largest number
vec2 = randi([-50, 50], 1, 9);
largest = vec2(1);
for i = 1:length(vec2)

    % TODO4: change the if statement to finish this work based on your understanding

    % Answer:

    if (vec2(i)>largest)

        largest = vec2(i);
    end
end
disp(largest);
%% Loops Practice
% Try: while-loop to find avg of (numbers > 25)

currentSum = 0;
currentCount = 0;
loopIndex = 1;

while (loopIndex <= length(vec2))
    if (vec2(loopIndex) > 25)
        currentSum = currentSum + vec2(loopIndex);
        currentCount = currentCount + 1;
    end
    loopIndex = loopIndex + 1;
end

avg_of_25_more = currentSum/currentCount
%% 
% Try: error-check of a user input until user gives a valid number between 2000 
% to 2050

inputYear = input('Enter a year between 2000 and 2050: ');
while (inputYear < 2000 || inputYear > 2050)
    inputYear = input('Enter a year between 2000 and 2050: ');
end
%% 
% Try: find the largest square number in this range (2000, 2050)

% TODO 5: use the following pseudocode
% 1. currentlargest = 0;
% 2. for var = 2000, 2001, ..., 2050
% 3. how to determine var is a square number : its sqrt is equal to the floor of its sqrt
% 4. currentlargest = var;
% 5. end and display currentlargest

% Answer:

currentlargest = 0;
for var = 2000:2050
    if sqrt(var) == floor(sqrt(var))
        currentlargest = var;
    end
end
disp(currentlargest)
%% Solve a Trace Problem
% 
% 
% *TODO 6: finish this trace problem*
% 
% a = 1;
% 
% b = 7;
% 
% num = 0;
% 
% initial = 199
% 
% while a <= b
% 
% if mod(initial, 2) == 1
% 
% initial = (initial - 1) / 2;
% 
% else
% 
% initial = initial / 2;
% 
% end
% 
% num = num + 1;
% 
% disp(['Division times: ', num2str(num)]);
% 
% a = a + 1;
% 
% b = b - 1;
% 
% end
% 
% last = initial
% 
% disp('Done');
% 
% 
% 
% *Answer:* 
%% 
% initial=199
%% 
% Division times: 1
%% 
% Division times: 2
%% 
% Division times: 3
%% 
% Division times: 4
%% 
% last=12
%% 
% Done
%% 
% 
% 
% *Scratch work* to track all variables' value _(!!! this is not solution, just 
% your thoughts!!!)_
%% 
% Change of a:
%% 
% 1
%% 
% 2
%% 
% 3
%% 
% 4
%% 
% 5
%% 
% Change of b:
%% 
% 7
%% 
% 6
%% 
% 5
%% 
% 4
%% 
% 3
%% 
% Change of num:
%% 
% 0
%% 
% 1
%% 
% 2
%% 
% 3
%% 
% 4
%% 
% Change of initial:
%% 
% 199
%% 
% 99
%% 
% 49
%% 
% 24
%% 
% 12
%% 
% 
% 
% *Verify via running Matlab*

a = 1;
b = 7;
num = 0;
initial = 199
while a <= b
    if mod(initial, 2) == 1
        initial = (initial - 1) / 2;
    else
        initial = initial / 2;
    end
    num = num + 1;
    disp(['Division times: ', num2str(num)]);
    a = a + 1;
    b = b - 1;
end
last = initial
disp('Done');
%% Create and Call functions

%----------------------You can save it as func1.m----------------------
function func1()
    disp('This is a function without input or output, it just displays a message');
end
%----------------------You can save it as func1.m----------------------
%%
%----------------------You can save it as func2.m----------------------
function func2(a)
    disp('This is a function with one input but no output, it displays the input');
    disp(a);
end
%----------------------You can save it as func2.m----------------------
%%
%----------------------You can save it as func3.m----------------------
% This function has outputs but no inputs
function [a, b] = func3()
    a = 1;
    b = 2;
end
%----------------------You can save it as func3.m----------------------
%%
%----------------------You can save it as func4.m----------------------
% This function has two outputs and two inputs
function [c,area] = fun4(a, b)
    c = sqrt(a^2 + b^2);
    area = 0.5*a * b;
end
%----------------------You can save it as func4.m----------------------
%%
%----------------------You can save it as func5.m----------------------
% This function has one output and one input
function y = func5(x)
    y = x^6 + 2*x^5 - 3*x^4 + 4*x^3 - 5*x^2 + 6*x - 7;
end
%----------------------You can save it as func5.m----------------------
%%
func1();
func2(15);
[res_a, res_b] = func3();
%%
clear
clc
%%
% TODO7: what vars are added to workspace after this line? a? b? c? area? res_c? res_area?
[res_c, res_area] = fun4(3, 4);

% Answer:

% it will be res_c, res_area, others are not in the workspace
%%
y1 = func5(1); % evaluate func5 at x=1

% You can also try creating .m files and calling functions within the m.file
%% Solving Ax=b on text-stored matrix:

matrix_data = load('data.txt'); % you may incorporate this into an error checking loop
A_fix = matrix_data(1:3, 1:3); % extract data
b_fix = matrix_data(1:3, 4);

% what if A is 7x8 not 3x4? We can flexible
[rows, cols] = size(matrix_data);
A = matrix_data(:, 1:rows); % A matrix
b = matrix_data(:, rows+1); % b vector
%%
% x = A\b; another way to denote solution

if det(A) == 0
    disp('Matrix is singular, linear system has no unique solution');
else
    x = A^(-1)*b;
    disp(x);
end
%%
filename='CountryA.txt';
while exist(filename)==0
    filename=input('Please enter file name: ','s');
end
matrix = load(filename);