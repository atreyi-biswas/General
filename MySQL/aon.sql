-- using AND : Both statements should be true
SELECT *
FROM employees
WHERE hire_date > "2023-01-05"  AND job = cook;

-- using OR : Either statements should be true
SELECT *
FROM employees
WHERE job = cook OR job = cashier;

-- using NOT : Statement should be false
SELECT *
FROM employees
WHERE NOT job = manager;

