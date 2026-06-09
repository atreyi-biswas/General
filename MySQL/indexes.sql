-- INDEXES (BTree Data Structure): 
-- Used to find values within a specific column more quickly
-- MySQL normally searches sequentially through a column
-- The longer the column, the more wxpensive the operation is
-- UPDATE takes more time SELECT takes 

CREATE INDEX last_name_idx
ON customers(last_name);

SHOW INDEXES FROM customers;

SELECT * FROM customers
WHERE last_name = "Biswas";  -- much more faster than no index

-- To create multi-index
CREATE INDEX last_name_first_name_idx
ON customers(last_name, first_name);

-- To separate indexes from multi-index now, we can write the following :
ALTER TABLE customers
DROP INDEX last_name_idx;
