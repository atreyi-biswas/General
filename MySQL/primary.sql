CREATE TABLE transactions(
transaction_id INT PRIMARY KEY,
amount DECIMAL(5, 2)
);
SELECT * FROM transactions;

-- if table already created with no primary constraints, then we can alter it as below
ALTER TABLE transactions
ADD CONSTRAINT
PRIMARY KEY(transaction_id);
SELECT * FROM transactions;

-- NOTE: Primary key can be used only for one column, NULL or multiple keys are not possible. Therefore, only one primary key per table is allowed.


