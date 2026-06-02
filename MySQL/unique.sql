-- if i want to add unique constraint after creating my table, i just need to write the following syntax with the variable name in ()

ALTER TABLE products
ADD CONSTRAINT
UNIQUE (product_name);

INSERT INTO products
VALUES  (100, "burger", 50.12), 
		(200, "fries", 30.99), 
		(300, "cold drinks", 10.00),
		(400, "combo", 60.10);

SELECT * FROM products;

-- now, if i add one more row with same product_name, it will show error, because i have used the UNIQUE CONSTRAINT.
