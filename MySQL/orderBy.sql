-- Order by Descending order:
SELECT * FROM employees
ORDER BY last_name DESC;

-- Order by Ascending order:   {default}
SELECT * FROM employees
ORDER BY last_name ASC;

-- If multiple values are same, we can include some other unique column, example:
SELECT * FROM transactions
ORDER BY amount, customer_id ;  -- {By default ascending}

--or we can do this too :
SELECT * FROM transactions
ORDER BY amount ASC, customer_id DESC;
