-- using AND operator : Both statements should be true
SELECT *
FROM employees
WHERE hire_date > "2023-01-05"  AND job = cook;

-- using OR operator : Either statements should be true
SELECT *
FROM employees
WHERE job = cook OR job = cashier;

-- using NOT operator : Statement should be false
SELECT *
FROM employees
WHERE NOT job = manager;

-- using BETWEEN operator : 
SELECT *
FROM employees
WHERE hire_date BETWEEN "2023-01-05"  AND "2023-10-05";
