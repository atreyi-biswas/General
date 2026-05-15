CREATE TABLE employees (
	employee_id INT,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    hourly_pay DECIMAL(5, 2),
    hire_date DATE
);

-- To rename table : RENAME TABLE employess TO xyz;

-- To bring a table : SELECT * FROM employees;

-- To drop(remove) table : DROP employees;

-- To alter table : ALTER TABLE employees;
--                  ADD phone_number VARCHAR(15);                    
