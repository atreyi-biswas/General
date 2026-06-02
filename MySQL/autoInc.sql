-- Auto increment automatically increases the transaction_id
CREATE TABLE transactions (
  transaction_id INT PRIMARY KEY AUTO_INCREMENT,
  amount DECIMAL(5, 2) 
);

-- Hence writing only values of amount is enough, the transaction_id automatically sequences itself
INSERT INTO transactions(amount)
VALUES(5.67);
SELECT * FROM transactions;

--To auto-increment from a specific amount:
ALTER TABLE transactions
AUTO INCREMENT = 100;
