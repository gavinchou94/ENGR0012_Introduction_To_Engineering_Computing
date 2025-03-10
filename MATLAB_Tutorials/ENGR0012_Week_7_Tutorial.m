%%  Week 7
%% Linear Fit

% Define the vectors x and y
x = [1, 2, 3, 4, 5, 6, 7];
y = [2.2, 2.8, 3.6, 4.5, 5.1, 6.1, 6.9];

% Perform linear fit
coeffs = polyfit(x, y, 1);

% Evaluate the polynomial at the given x points
y_fit = polyval(coeffs, x);

figure;
plot(x, y, 'bd', x, y_fit, 'r-');
title('Linear Fit');
xlabel('x');
ylabel('y');
legend('Data', 'Linear Fit');
% Display the coefficients: ax+b
disp(coeffs)
%% Quadratic Fit

% Define the vectors x and y
x = [1, 2, 3, 4, 5];
y = [2.2, 2.8, 3.6, 4.5, 5.1];

% Perform quadratic fit, the last parameter of polyfit is 2
% you get coeffs as a vector of 1*3
coeffs = polyfit(x, y, 2);

% Evaluate the polynomial at the given x points
y_fit = polyval(coeffs, x);

figure;
plot(x, y, 'ro', x, y_fit, 'b-');
title('Quadratic Fit');
xlabel('x');
ylabel('y');
legend('Data', 'Quadratic Fit');
% Display the coefficients: ax^2+bx+c
disp(coeffs)
%% Higher Degree Polynomial Fit

% Define the vectors x and y
x = [1, 2, 3, 4, 5, 9, 18];
y = [2.2, 2.8, 3.6, 4.5, 5.1, 9.7, 10.7];

% Perform quadratic fit, the last parameter of polyfit is 4
% you get coeffs as a vector of 1*5
coeffs = polyfit(x, y, 4);

% Generate a finer x vector for a smoother fit curve
x_fine = linspace(min(x), max(x), 100);
y_fit = polyval(coeffs, x_fine);

figure;
plot(x, y, 'ro', x_fine, y_fit, 'b-');
title('Polynomial Fit (Degree 4)');
xlabel('x');
ylabel('y');
legend('Data', 'Polynomial Fit');
% Display the coefficients
disp(coeffs)
%%
% Since x has too fewer datapoints, 
% and the 4th order curve is not obvious
figure;
plot(x, y, 'ro', x, polyval(coeffs, x), 'b-');
title('Polynomial Fit (Degree 4) without smoothing');
%% Linear Fit and Error Analysis

% Define the vectors x and y
x = [1, 2, 3, 4, 5];
y = [2.2, 2.8, 3.6, 4.5, 5.1];

% Perform linear fit
coeffs = polyfit(x, y, 1);

% Evaluate the polynomial at the given x points
y_fit = polyval(coeffs, x);

% Calculate R-squared value
SSE = sum((y - y_fit).^2); % or SSE = sum((y - y_fit).*(y - y_fit));
SST = sum((y - mean(y)) .^2); % or SST = sum((y - mean(y)).*(y - mean(y)));
rSquared = 1 - (SSE / SST);
%% Plot in a fancy way! 

% Calculate errors
AbsoluteError = abs(y - y_fit);

% Create a 2x2 subplot
figure;
subplot(2, 2, 1);
plot(x, y, 'ro', x, y_fit, 'b-');
title('Linear Fit');
xlabel('x');
ylabel('y');
legend('Data', 'Linear Fit');

subplot(2, 2, 2);
% this is just display two coeffs in a sub-plot
text(0.1, 0.5, sprintf('Slope: %.2f\nIntercept: %.2f', coeffs(1), coeffs(2)), 'FontSize', 12);
axis off;
title('Coefficients');

subplot(2, 2, 3);
plot(x, AbsoluteError, 'ko-');
title('Absolute Error');
xlabel('x');
ylabel('Absolute Error');

subplot(2, 2, 4);
% this is just display two coeffs in a sub-plot
text(0.1, 0.5, sprintf('R^2: %.4f\n', rSquared), 'FontSize', 12);
axis off;
title('Error Analysis');
%% Find where the maximum error is 

AbsoluteError = abs(y - y_fit);
[maxerror, maxloc] = max(AbsoluteError)
%% 
% Use |gtext| function to put that information on the graph

figure;
plot(x, y, 'ro', x, y_fit, 'b-');
gtext(['The maximum error is ', num2str(maxerror), ' at index=', num2str(maxloc)])
%% Error Analysis of High-order Fit and Predict Value

% Define the vectors x and y
x = [1, 2, 3, 4, 5, 9, 18];
y = [2.2, 2.8, 3.6, 4.5, 5.1, 9.7, 10.7];

% Perform quadratic fit, the last parameter of polyfit is 4
% you get coeffs as a vector of 1*5
coeffs = polyfit(x, y, 4);

% To analyze error, you have to stick to original x
y_fit = polyval(coeffs, x);

figure;
plot(x, y, 'ro', x, y_fit, 'b-');
title('Polynomial Fit (Degree 4 without smoothing)');
xlabel('x');
ylabel('y');
legend('Data', 'Polynomial Fit');
SSE = sum((y - y_fit).^2); % or SSE = sum((y - y_fit).*(y - y_fit));
SST = sum((y - mean(y)) .^2); % or SST = sum((y - mean(y)).*(y - mean(y)));
rSquared = 1 - (SSE / SST);
disp(rSquared)
%% 
% Use this new curve to predict a value at x=16

% Method 1: y = ax^4+bx^3+cx^2+dx+e
x0 = 16;
predicted_y = coeffs(1)*(x0)^4+coeffs(2)*(x0)^3+coeffs(3)*(x0)^2+coeffs(4)*(x0)^1+coeffs(5)*(x0)^0;
disp(predicted_y)
%Method 2: polyval is not only for a whole vector but for a single value
method2_predicted_y = polyval(coeffs, x0);
disp(method2_predicted_y)
%% Practice |gtext| again

figure;
plot(x, y, 'ro', x, y_fit, 'b-');
gtext(['The predicted y at x=', num2str(x0), ' is ', num2str(method2_predicted_y)])
%% Review: HW9 Trace Problem

% Main Program
x=[0 1 4 5 3 2 0 3 5 4 1 0];
a=0;
c=5;
num=0;
%Loops
for i=2:2:length(x)-1
    b=7;
    switch x(i)
        case 4
            x(b)=99;
            disp(x)
            h=mod(i,2)
        case 1
            summing=0;
            while b<=10
                summing=summing+b;
                b=b+1;
            end
            disp(['Summing is ',num2str(summing)])
            disp(['Result is ',num2str(floor(x(i)/2))])
        otherwise
            [a,b,c]=Fun3(a,b,c,i);
            disp(['a is ', num2str(a), ' b is ',num2str(b), ' c is ',num2str(c)])
    end
    num=num+1;
end
disp(['num is ',num2str(num)])
disp(['i is ',num2str(i)])

%%%%%%%%%%%%%Function%%%%%%%%%%%%%%
function [c,a,b]=Fun3(c,a,b,i)
    x=[1 2 3 4 5 6 7 8];
    if i==2
        c = x(i/2);
    end
    b=a+b+c;
    a=x(1)+c;
    c=3;
end
%% Review: HW8 Trace Problem

% Main Program
disp(((15-3+2*4)/5)^2-2^3)
disp(6-10*2/2^2)

num_loops=0;
main1=-5;

for i = 5:3:16
    x = 10-i;
    y = 2*i;
    main1 = main1+confuse1(i,x,y);
    num_loops=num_loops+1;
end

disp(['num loops: ',num2str(num_loops)])
disp(['main1: ',num2str(main1)])

%%%%%%%%%%%%%Function%%%%%%%%%%%%%%
function temp=confuse1(i,y,x)
    if i > 10
        i=i-10;
    end
    switch (i)
        case {2, 3, 6, 8}
            temp=y-x;
            disp(['case1: i = ',num2str(i)])
            disp(['output = ',num2str(temp)])
        case {0, 4, 5, 7}
            temp=x-y;
            disp(['case2: i = ',num2str(i)])
            disp(['output = ',num2str(temp)])
        otherwise
            temp=x+y;
            disp(['otherwise: i = ',num2str(i)])
            disp(['output = ',num2str(temp)])
    end
end
%% Review: HW7 (problem 3) Trace Problem

% Main Program
A=[2,4,6,8];
B=[1,3,5,7];

string1='Oh my what a beautiful day';
string2='my life is wonderful';

for i=1:6
    switch i
        case 2
            output=funFunction(string1,1,A(3)-1);
        case 1
            output=round((sum(B))/4);
        case 5
            output='I want';
        case 3
            output=min(B);
        case 4
            output=funFunction(string2,1,A(4));
        otherwise
            output='engineering';
    end
    disp(output)
end

%%%%%%%%%%%%%Function%%%%%%%%%%%%%%
function [done]=funFunction(array,x,y)
    if x < 1
        done=sum(array);
    else
        for i=x:1:y
            if (i == 1)
                done=[];
            elseif i>3
                done=[done,array(i)];
            end
        end
    end
end
%% Review: HW6 Trace Problem

% Main Program
x=[2, 1, 7, 0, 6, 1, 3, 3, 8];
y=[-1, 2, 0, 4, 2, 7, 2, -1, 4];
temp= [1,4,2,3,0,6,3,8,1,10];
num_loops=0;

for i = 1:2:10
    m = temp(i)
    MyArray(i) = confusion(m, x, y) ;
    num_loops=num_loops+1;
end

disp (['num loops: ', num2str(num_loops)])
disp (['main1: ',num2str(sum(MyArray))])

%%%%%%%%%%%%%Function%%%%%%%%%%%%%%
function temp=confusion (i,y,x)
    switch (i)
        case {2, 5, 8, 11}
            temp=((12-4^2*3)/2)+i^2;
            disp(['temp = ', num2str(temp)])
            temp=ceil(temp);
        case {0, 3, 6, 10}
            temp=median(x);
            disp(['temp = ', num2str(temp)])
        otherwise
            temp=y(i)/x(i);
            disp(['temp = ', num2str(temp)])
    end
end