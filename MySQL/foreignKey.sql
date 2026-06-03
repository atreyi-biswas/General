CREATE TABLE transactions(
		transaction_id INT PRIMARY KEY AUTO_INCREMENT,
    amount DECIMAL(5, 2),
    customer_id INT,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);

-- i created another table of "customers", where there's a similar column called "customer_id"
CREATE TABLE customers(  
    customer_id INT PRIMARY KEY AUTO_INCREMENT,     
    first_name VARCHAR(50),     
		last_name VARCHAR(50) 
	)
