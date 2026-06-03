-- FOREIGN KEY : Primary key from one table that's found in another table


CREATE TABLE transactions(
		transaction_id INT PRIMARY KEY AUTO_INCREMENT,
    amount DECIMAL(5, 2),
    customer_id INT,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);

-- i created another table of "customers", where there's a similar column called "customer_id", which MUST be declared as a primary key, for it to be a foreign key.
CREATE TABLE customers( 
    customer_id INT PRIMARY KEY AUTO_INCREMENT,     
    first_name VARCHAR(50),     
		last_name VARCHAR(50) 
	)

-- To drop foreign key from a table
ALTER TABLE transactions
DROP FOREIGN KEY transactions_ibfk_1
-- transactions_ibfk_1 is the name of the foreign key in the schemas

-- to add foreign key after table is created
ALTER TABLE transactions
ADD CONSTRAINT fk_customer_id  -- we do not necessarily need to name the foreign key constraint
FOREIGN KEY (customer_id) REFERENCES customers(customer_id)

-- now we have a link between customers table and transactions table
ALTER TABLE transactions 
AUTO_INCREMENT = 1000
INSERT INTO transactions(amount, customer_id)
VALUES (4.99, 3),
	(2.34, 2),
    (3.34, 3),
    (4.67, 1);

SELECT * FROM transactions;
