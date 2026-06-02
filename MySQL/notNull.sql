ALTER TABLE products
MODIFY price DECIMAL(4, 2) NOT NULL;


-- The following query will not be executed because price should be NOT NULL, but it could be set to 0.
INSERT INTO products
VALUES (104, "cookie", NULL);

SELECT * FROM products;
