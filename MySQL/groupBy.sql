-- GROUP BY :
-- aggregate all rows by specific column
-- often used with aggregate functions, ex, SUM(), MAX(), MIN(), AVG(), COUNT()

SELECT SUM(amount), order_date
FROM transactions
GROUP BY order_date;

-- Note: If we want to use the WEHRE clause with the GROUP BY clause, we need to use HAVING
SELECT COUNT(amount), customer_id
FROM transactions
GROUP BY customer_id
HAVING COUNT(amount) > 1;
