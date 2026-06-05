-- Limit : Limit number of records
-- used to display large data on pages (pagination)

SELECT * FROM employees
LIMIT 5; -- Default limits by customer_id

SELECT * FROM employees
ORDER BY last_name DESC LIMIT 5;

--Display some number of records after an offset :
SELECT * FROM employees
LIMIT 10, 1;  -- skip 10 rows, return 1 row after that

-- offset = how many rows to skip  ,  count = how many rows to return
