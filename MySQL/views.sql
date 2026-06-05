-- views :table based on reult set of an SQL statement
-- fields in a view are from one or more real tables in the database
-- not rea tables, could be interacted with as if they were

CREATE VIEW employee_attendance AS 
SELECT first_name, last_name
FROM employees;

SELECT * FROM employee_attendance
ORDER BY last_name ASC;  -- we can perform operations like this on it

--to delete view, we write :
DROP VIEW employee_attendance;

-- NOTE : views get updated automatically when changes are made to the real table

