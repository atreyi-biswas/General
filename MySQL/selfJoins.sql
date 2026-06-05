-- Self Join : Join another copy of table to itself
-- comapre rows of the same table
-- displays hierarchy of data

SELECT * 
FROM customers AS A
INNER JOIN customers AS B
ON A.referal_id = B.customer_id;

-- to join specific columns, write :
SELECT A.customer_id, A.first_name, A.last_name, 
        B.first_name, B.last_name
FROM customers AS A
INNER JOIN customers AS B
ON A.referal_id = B.customer_id;

-- or
SELECT A.customer_id, A.first_name, A.last_name, 
        CONCAT(B.first_name, " ", B.last_name) AS referred_by
FROM customers AS A
INNER JOIN customers AS B
ON A.referal_id = B.customer_id;

--if we want all the contents, with/withot refered members, then we use left join:
SELECT A.customer_id, A.first_name, A.last_name, 
        CONCAT(B.first_name, " ", B.last_name) AS referred_by
FROM customers AS A
LEFT JOIN customers AS B
ON A.referal_id = B.customer_id;
