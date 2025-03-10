%% Week 8
%% TODO1

%TODO1
T = checkTriangle

function T = checkTriangle
    sides = [0, 0, 0];
    for i = 1:3
        sides(i) = input('Please enter side:');
    end
    
    a = sides(1);
    b = sides(2);
    c = sides(3);
    
    if (a + b > c) && (a + c > b) && (b + c > a)
        T = 1;
    else
        T = 0;
    end
end
%% TODO2

% TODO2
attempt = 0;
move_ahead = 0;
    
while (attempt < 4 && move_ahead == 0)
    T = checkTriangle();
    attempt = attempt + 1;
    if T == 1
        disp('Bingo, you mastered the triangle inequality!');
        move_ahead = 1;
    else
        disp('Try again, you can make it.');
    end
end

if (move_ahead == 0)
    disp("Wrong, sum of any two sides ha2s to be greater than the third side.")
end
%% TODO3

% TODO3
[avg_grade, rsquared, attempts, max_attempt] = load_file_and_analysis('grades.txt');
disp(['The average of students` grade is ', num2str(avg_grade), ' and the linear fit error is ', num2str(rsquared)])
histogram(attempts, 3)
gtext(['Maximum attempt is ', num2str(max_attempt)])

function [avg_grade, rsquared, attempts, max_attempt] = load_file_and_analysis(filename)
    data = load(filename);
    attempts = data(1, :);
    grades = data(2, :);
    
    avg_grade = mean(grades);
    
    p = polyfit(attempts, grades, 1);
    y_fit = polyval(p, attempts);
    SSE = sum((grades - y_fit).^2);
    SST = sum((grades - mean(grades)).^2);
    rsquared = 1 - (SSE / SST);
    
    max_attempt = max(attempts);
end
%% TODO4

% TODO4
start_img = imread('triangle.png');

[height, width, ~] = size(start_img);

% keep first row unchanged
first_row = start_img(1:round(height/3), :, :);
% this is second row of triangles
second_row = start_img(round(height/3)+1:round(2*height/3), :, :);
% this is last row of triangles, but we care more about where d and e are  
% last_row = start_img(round(2*height/3)+1:end, :, :);
d = start_img(round(2*height/3)+1:end, round(width/3)+1:round(2*width/3), :);
e = start_img(round(2*height/3)+1:end, round(2*width/3)+1:width, :);
f = start_img(round(2*height/3)+1:end, 1:round(width/3), :);

% rotate d three times
d = rot90(d, 3);
% rotate e
e = rot90(e);

% the last row should restore to the order from d to e to f
modified_last_row = [d, e, f];
% the whole picture should restore to the order of arrange
% from first row to last row to second row
modified_pic = [first_row; modified_last_row; second_row];

figure;
subplot(1,2,1);
imshow(start_img);
title('Start Image');

subplot(1,2,2);
imshow(modified_pic);
title('Restored Image');
%% Newly Added TODO5

% Newly Added TODO5
data = load("grades.txt");
vec = extract_nozeros(data);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function vec = extract_nozeros(mat)
    [rows, ~] = size(mat);
    vec = [0, 0, 0, 0, 0];
    j = 0;
    for i=1:rows
        if (mat(i, i) ~= 0 && j<5)
            j = j + 1;
            vec(j) = mat(i,i);
        end
    end
end