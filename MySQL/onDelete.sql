-- ON DELETE SET NULL : When a foreign key is deleted, replace foreign key with NULL

ALTER TABLE transactions
ADD CONSTRAINT fk_customer_id
FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
ON DELETE SET NULL;

DELETE FROM customers
WHERE customer_id = 4;
SELECT * FROM transactions;

-- ON DELETE CASCADE : When a foreign key is deleted, delete row

ALTER TABLE transactions
ADD CONSTRAINT fk_customer_id
FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
ON DELETE CASCADE;

DELETE FROM customers
WHERE customer_id = 4;
SELECT * FROM transactions;

