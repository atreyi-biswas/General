SET AUTOCOMMIT = OFF;
COMMIT;  --create a safe point

DELETE FROM employees;
SELECT * FROM employees; -- Table deleted

--can undo all these changes because of commit by the help of ROLLBACK statement

ROLLBACK;
SELECT * FROM employees; --Table back to how it previously was

--to save changes the following changes...
DELETE FROM employees;
SELECT * FROM employees; 
-- have to commit after changes
COMMIT;
