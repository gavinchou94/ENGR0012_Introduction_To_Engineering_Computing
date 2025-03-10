%% Week 6
%% Review: Function Creation and Call

% The main program should call three functions below

% Calling function 1 here
[a,b,c] = getABC;

% Calling function 2 here
TF = isTriangle(a, b, c);
disp(['The 3 sides can/can`t form a triangle (1 yes, 0 no): ', num2str(TF)]);

% Calling function 3 here
if TF
    area = areaTriangle(a, b, c);
    disp(['The area of the triangle: ', num2str(area)]);
end
% End main program


function [a, b, c] = getABC
    a = input("please enter a:");
    b = input("please enter b:");
    c = input("please enter c:");
end

function T = isTriangle(a, b, c)
    if (a+b>c) &&(a+c>b) && (b+c>a)
        T=1;
    else
        T=0;
    end
end

function area = areaTriangle(a, b, c)
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
end
%% Review Function Call for Quiz 2

x = 10;
y = 4;
something(y,x);
disp(['x after calling: ', num2str(x)])
disp(['y after calling: ', num2str(y)])

function something(x,y)
% insert your understanding here
    disp(x)
    disp(y)
    y = y + 1;
end
%% 
% At the insertion point above, |x| receives the value of first argument of 
% something(), i.e., x=4
% 
% |y| receives the value of second argument of something(), i.e., y=10
% 
% later y is updated to 11, but not passed out of the function scope
% 
% x and y after calling are not changed, and stay 10 and 4.

x = 10;
y = 4;
y=something2(y,x);

disp(['x after calling: ', num2str(x)])
disp(['y after calling: ', num2str(y)])

function y=something2(x,y)
    disp(x)
    disp(y)
    y = y + 1;
end
%% 
% At the insertion point above, |x| receives the value of first argument of 
% something(), i.e., x=4
% 
% |y| receives the value of second argument of something(), i.e., y=10
% 
% later y is updated to 11, and is passed out as y
% 
% x after calling is not changed (still 10), but y is changed to 11.

x = 10;
y = 4;
y=something3(x,y);

disp(['x after calling: ', num2str(x)])
disp(['y after calling: ', num2str(y)])

function y=something3(x,y)
    disp(x)
    disp(y)
    y = y + 1;
end
%% 
% At the insertion point above, |x| receives the value of first argument of 
% something(), i.e., x=10
% 
% |y| receives the value of second argument of something(), i.e., y=4
% 
% later y is updated to 5, and is passed out as y
% 
% x after calling is not changed (still 10), but y is changed to 5.
%% Review: common built-in functions with two outputs
%% 
% * [minvalue, minindex] = min(vec)
% * [maxvalue, maxindex] = max(vec)
% * [rows, cols] = size(mat)

vec = [3, 4, 7.5, 19.3, -6.4, 2, 8.1];
mat = [vec;vec];
[minvalue, minindex] = min(vec);
[maxvalue, maxindex] = max(vec);
[rows, cols] = size(mat);

minvalue, minindex, maxvalue, maxindex, rows, cols
%% Review: run some program indefinitely

run_again = 'y';
while run_again == 'y'
    [a,b,c] = getABC;
    TF = isTriangle(a, b, c);
    disp(['The 3 sides can/can`t form a triangle (1 yes, 0 no): ', num2str(tf)]);
    if TF
        area = areaTriangle(a, b, c);
        disp(['The area of the triangle: ', num2str(area)]);
    end
    run_again = input('Do you want to run the triangle program again (y for yes, others for no)','s');
end
%% Create a 2x1 subplot
% Must include subplot(2, 1, ?) before each plot

x = 0:0.1:10;
y1 = 20:0.2:40;
y2 = sin(x);

figure(1);
subplot(2, 1, 1);
plot(x, y1, 'rd');
title('Plot of y1 vs x');
xlabel('x');
ylabel('y1');

subplot(2, 1, 2);
plot(x, y2, 'r--o');
title('Plot of y2 = sin(x) vs x');
xlabel('x');
ylabel('y2');
%% Create a 1x2 subplot
% Must include subplot(1, 2, ?) before each plot

figure(2);
subplot(1, 2, 1);
plot(x, y1, 'rd');
title('Plot of y1 vs x');
xlabel('x');
ylabel('y1');

subplot(1, 2, 2);
plot(x, y2, 'r--o');
title('Plot of y2 = sin(x) vs x');
xlabel('x');
ylabel('y2');
%% Create a 2x2 subplot
% Must Include subplot(2, 2, ?) before each plot: ? can be 1, 2, 3, 4
%% Read, Display Color Image, and Rotate Image

figure(3);
I = imread('cathy.jpg');
imshow(I);
%%
% Understand the data stored at each pixel
disp(I);
% Display the size of the image
% For color images, it shall return height * width * 3
disp(size(I));
%%
% Rotate the image 90 degrees counterclockwise
I_rotated = rot90(I);

% Display the original and rotated images
figure;
subplot(1, 2, 1);
imshow(I);

subplot(1, 2, 2);
imshow(I_rotated);
%% Display Black-White Image

figure;
I_bw = imread('pgh_bw.png');
imshow(I_bw);
% For color images, it shall return height * width
disp(size(I_bw));
%% Adjusting Image Brightness

I = imread('cathy.jpg');

% Increase the brightness by adding 75 to each pixel value
I_brighter = I + 75;

% Display the original and brighter images
subplot(1, 2, 1);
imshow(I);

subplot(1, 2, 2);
imshow(I_brighter);
%%
% make it all white/black
I = imread('cathy.jpg');
I_white = I + 255;
I_black = I - 255;

% Display the original and brighter images
subplot(1, 2, 1);
imshow(I_white); % white color is same as backhground color

subplot(1, 2, 2);
imshow(I_black);
%% Combining Two Images

I1 = I;
I2 = I_brighter;

% Get the size of the images
[rows, cols, ~] = size(I1);

% Combine the left half of I1 with the right half of I2
I_combined = [I1(:, 1:cols/2, :), I2(:, cols/2+1:end, :)];

% Display the combined image
figure;
imshow(I_combined);
%% 
% What does |I1(:, 1:cols/2, :)| mean?
%% 
% * Remember that |matrix(:, j)| is the vector of all rows and j-th column of 
% matrix
% * |matrix(:, a:b)| is the vector of all rows and (a-th to b-th) column of 
% matrix
% * |I1(:, 1:cols/2, :)| is the sub-matrix of all rows, (1st to cols/2 -th) 
% column, all color channels of |I1|
% * That is the left half of image |I1|
%% Assembling Two Images Vertically

% Cut the top half of the first image
I1_half = I1(1:floor(rows/2), :, :);

% Cut the bottom half of the second image
I2_half = I2(floor(rows/2)+1:end, :, :);

% Assemble the new image
I_combined = [I1_half; I2_half]; % note here the two halves are connected using semicolon

% Display the combined image
imshow(I_combined);
%% 
% What does |I1(1:floor(rows/2), :, :)| mean?
%% 
% * |I1(1:floor(rows/2), :, :)| is the sub-matrix of (1st to rows/2 -th) rows, 
% all columns, all color channels of |I1|
% * That is the upper half of image |I1|
%% Linear Fit

%Define the vectors x and y
x = [1, 2, 3, 4, 5];
y = [2.2, 2.8, 3.6, 4.5, 5.1];

% Perform linear fit
coeffs = polyfit(x, y, 1); % coeffs will be a 1*2 vector after this

% Evaluate the polynomial at the given x points
y_fit = polyval(coeffs, x); % y_fit is the predicted value at each x, 1*5 vector

figure;
plot(x, y, 'ro', x, y_fit, 'b-');
title('Linear Fit');
xlabel('x');
ylabel('y');
legend('Data', 'Linear Fit');
% Display the coefficients
disp('Coefficients of ax+b: a, b');
disp(coeffs)