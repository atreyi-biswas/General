-- INNER JOIN

SELECT * 
FROM transactions INNER JOIN customers	
ON transactions.customer_id = customers.customer_id;
/* 

transaction_id | amount	| customer_id	| customer_id	| first_name | last_name
1003	         | 4.67	  | 1	          | 1	          | Fred	     | Fish
1001	         | 2.34	  | 2	          | 2	          | Atreyi	   | Chicken
1000	         | 4.99	  | 3	          | 3	          | Biswas	   | Veggies
1002           | 3.34	  | 3	          | 3	          | Biswas	   | Veggies

*/

-- to show specific table columns only:
SELECT transaction_id, amount, first_name, last_name
FROM transactions INNER JOIN customers	
ON transactions.customer_id = customers.customer_id;
/* 

transaction_id  |  amount | First_name | last_name
1000	          | 4.99	  | Biswas	   | Veggies
1001	          | 2.34	  | Atreyi	   | Chicken
1002	          | 3.34	  | Biswas	   | Veggies
1003	          | 4.67	  | Fred	     | Fish

*/

--LEFT JOIN


--RIGHT JOIN
