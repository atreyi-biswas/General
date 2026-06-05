-- Unions : Combines two or more Select Statemnts
SELECT * FROM income
UNION 
SELECT * FROM expenses;

-- Only works if both the tables have same number of columns, so we can select what columns we want to include, example:
SELECT first_name, last_name FROM employees
UNION 
SELECT first_name, last_name FROM customers;

UNION ALL -- : Includes all duplicates
