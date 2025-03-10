%% Week 5
%% Function with no inputs, no outputs

% Call the function, this is the main script
noInputsNoOutputs();

% This is function
function noInputsNoOutputs()
    disp('This function has no inputs and no outputs.');
end
%% Function with no inputs, but with outputs

% Call the function, this is the main script
[a, b, c] = noInputsHaveOutputs();
disp(['a: ', num2str(a), ', b: ', num2str(b), ', c: ', num2str(c)]);

% This is function
function [a, b, c] = noInputsHaveOutputs()
    a = 1;
    b = 2;
    c = 3;
end
%% Function with inputs and no outputs

% Call the function, this is the main script
haveInputsNoOutputs(10, 20, 30);

% This is function
function haveInputsNoOutputs(x, y, z)
    disp(['x: ', num2str(x), ', y: ', num2str(y), ', z: ', num2str(z)]);
end
%% Function with inputs and outputs

% Call the function, this is the main script
[aSum, aProduct] = haveInputsHaveOutputs(5, 7);
disp(['Sum: ', num2str(aSum), ', Product: ', num2str(aProduct)]);

% This is function
function [sum, product] = haveInputsHaveOutputs(a, b)
    sum = a + b;
    product = a * b;
end
%% Variables passing with different names and orders

% Call the function, this is the main script
a = 10;
b = 20;
c = 30;
[z, x, y] = exampleFunction(c, a, b);
disp(['x: ', num2str(x), ', y: ', num2str(y), ', z: ', num2str(z)]);

% This is function
function [x, y, z] = exampleFunction(a, b, c)
    % Perform some operations
    x = a + 1;
    y = b + 1;
    z = c + 1;
end
%% 
% In this example:
%% 
% * The main script defines variables a, b, and c.
% * These variables are passed to the function exampleFunction in the order 
% c, a, b.
% * Inside the function, they are received as a, b, and c respectively.
% * The function performs operations and returns the results as x, y, and z.
% * The main script receives the results in the order z, x, y and displays them.
%% Example on variable values not passed out

% Main script
a = 10;
b = 20;
c = 30;
exampleFunction2(a, b, c);
disp(['Main script - a: ', num2str(a), ', b: ', num2str(b), ', c: ', num2str(c)]);

% This is function
function exampleFunction2(a, b, c)
    % Modify the variables
    a = a + 1;
    b = b + 1;
    c = c + 1;
    % Display the values of a, b, and c inside the function
    disp(['Function - a: ', num2str(a), ', b: ', num2str(b), ', c: ', num2str(c)]);
end
%% Examples of multiple functions in a .m file

% This is one .m file

[p1, p2] = get_values; % calling function_1 to get p1, p2
choice = user_menu;    % calling function_2 to get choice

% Switch case to call the appropriate function
switch choice
    case 1
        % Calculate acceleration, p1 goes to F, p2 goes to m
        F = p1;
        m = p2;
        a = calculateAcceleration(F, m);
        disp(['The acceleration is: ', num2str(a)]);
    case 2
        % Calculate mass, p1 goes to F, p2 goes to a
        F = p1;
        a = p2;
        m = calculateMass(F, a);
        disp(['The mass is: ', num2str(m)]);
    case 3
        % Calculate force, p1 goes to m, p2 goes to a
        m = p1;
        a = p2;
        F = calculateForce(m, a);
        disp(['The force is: ', num2str(F)]);
    otherwise
        disp('Invalid choice');
end
% main script ends here
function [p1, p2] = get_values
    % Take input from the user
    disp('Please enter two parameters in the order of F, m, a')
    p1 = input('Enter the first parameter: ');
    p2 = input('Enter the second parameter: ');
end

function choice = user_menu
    % Display the menu
    disp('1. Calculate acceleration');
    disp('2. Calculate mass');
    disp('3. Calculate force');
    % Take input from the user
    choice = input('Enter your choice: ');
end

function a = calculateAcceleration(F, m)
    a = F/m;
end

function m = calculateMass(F, a)
    m = F/a;
end

function F = calculateForce(m, a)
    F = m*a;
end
%% Review on solving linear equations

fileName = 'None'; % a random name for the file

% Indefinite check until the file exists
while exist(fileName, 'file') == 0
    fileName = input('Enter the name of the data file: ', 's');
end

% Load the data from the file
data = load(fileName);

% Get the size of the data matrix and 
% Check if the data matrix has the correct dimensions
[m, n] = size(data);
if n ~= m + 1
    disp('The data matrix must have n columns and n-1 rows.');
    return;
end

% Separate matrix A and vector b
A = data(:, 1:end-1);
b = data(:, end);

% Check if the determinant of A is non-zero
if det(A) == 0
    disp('Matrix A is singular and cannot be inverted.');
    return;
end

% Solve for X
X = inv(A) * b;
% Display the solution
disp('The solution vector X is:');
disp(X);
%% Plot vectors x and y

% Define the vectors x and y
x = 0:0.1:10;
y1 = 20:0.2:40;

%Create a plot of x and y
figure(1);
plot(x, y1);

%Add title and labels
title('Plot of y1, x');
xlabel('x');
ylabel('y1');
%Add some text to the plot
gtext('random text'); % Add text to the plot
%%
y2 = sin(x);

% Plot with different color and markers
figure(2)
plot(x, y2, 'r--o'); % Red dashed line with circle markers
title('Plot of y2=sin(x)');
xlabel('x');
ylabel('y2');

% Add legends
legend('sin(x) with markers');
%% Histogram

% Create a histogram with specified number of bins
figure(3);
histogram(y2, 4);
title('Histogram of y2');
xlabel('y2');
ylabel('Frequency');

% Create a histogram with specified number of bins
figure(4);
histogram(y2, 6);
title('Histogram of y2 with 6 Bins');
xlabel('y2');
ylabel('Frequency');
%% Display a menu

% capture user input
userInput = menu('Please choose one of the following food:', 'Burger', 'Pizza', 'Sushi');
% Switch case to handle user input
switch userInput
    case 1
        disp('You chose Burger.');
    case 2
        disp('You chose Pizza.');
    case 3
        disp('You chose Sushi.');
    otherwise
        disp('Invalid choice.');
end
%% Nested menu for histogram bins

figure(5);
userInput = menu('Please choose how many bins to plot y2:', '6 Bins', '9 Bins', '12 Bins');
switch userInput
    case 1
        histogram(y2, 6);
    case 2
        histogram(y2, 9);
    case 3
        histogram(y2, 12);
    otherwise
        disp('Invalid choice.');
end