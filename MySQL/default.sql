-- To alter table after table is created
ALTER TABLE products
ALTER price SET DEFAULT 0;

-- to set while creating table
CREATE TABLE products (
	product_id INT,
    product_name VARCHAR(25),
    price DECIMAL(4, 2) DEFAULT 0
);
