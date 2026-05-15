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

-- To drop column : ALTER TABLE employees
--                  DROP COLUMN email;

-- To alter table : ALTER TABLE employees
--                  ADD phone_number VARCHAR(15);                    

-- * : All

-- To rename table : ALTER TABLE employees
--                   RENAME COLUMN phone_number TO email;   {but the email data type is the same as phone_number datatype, i.e, VARCHAR}

-- To modify : ALTER TABLE employees
--             MODIFY COLUMN email VARCHAR(100)

-- To move columns in a table : ALTER TABLE employees
--                              MODIFY email VARCHAR(100)
--                              AFTER last_name;               {or if you want to bring it to first column, then write, FIRST;}
--                              SELECT * FROM employees;
