-- To count the number of values in column amount
SELECT COUNT(amount)
FROM transactions;
-- To change the name of COUNT(), we can write:
SELECT COUNT(amount) AS xyz
FROM transactions;

--To get the maximum value of the column
SELECT MAX(amount)
FROM transactions;

--To get the minimum value of the column
SELECT MIN(amount)
FROM transactions;

--To get the average value of the column
SELECT AVG(amount)
FROM transactions;

-- To join two strings
SELECT CONCAT(first_name, " ", last_name) AS full_name
FROM employees;
