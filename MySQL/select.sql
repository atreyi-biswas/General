SELECT first_name, last_name  -- only shows first and last name from the table employees
FROM employees;

--CONDITION
SELECT * FROM employees
WHERE employee_id = 1

-- to write NULL, we write:

SELECT * FROM employees
WHERE hire_date IS NULL;
