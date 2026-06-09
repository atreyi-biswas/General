-- ROLLUP clause
-- extention of the GROUP BY clause
-- produces another row and shows the grand total(super aggregiate value)

SELECT SUM(amount), order_date
FROM transactions
GROUP BY order_date
WITH ROLLUP;
