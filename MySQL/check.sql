ALTER TABLE employees
ADD CONSTRAINT chk_hourly_pay CHECK(hourly_pay >= 10.00);


-- if we execute the following query, it will show an error, because hourly_pay is less than 10.00
INSERT INTO employees
VALUES (7, "Hayley", "Cooper", 5.00, "2023-01-07");

-- to drop the constraint, we write
ALTER TABLE employees
DROP CHECK chk_hourly_pay;
