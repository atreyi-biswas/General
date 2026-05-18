--To UPDATE: 
UPDATE employees
SET hourly_pay = 5.25
WHERE employee_id = 1;
SELECT * FROM employees;

--To UPDATE multiple columns:
UPDATE employees
SET hourly_pay = 5.25,
  first_name = "xyz"
WHERE employee_id = 1;
SELECT * FROM employees;

--To UPDATE consistent values accross the column:
UPDATE employees
SET hourly_pay = 5.25,
SELECT * FROM employees;
