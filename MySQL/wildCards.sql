--wild card characters : substitute one or more characters in a string

--here, writing first_name = "s", it searches for the name with only s, and not starting with s
SELECT * FROM employees
WHERE first_name = "s";

-- instead we write...
SELECT * FROM employees
WHERE first_name LIKE "a%";

-- to search a name that ends with a charater/string, we write:
SELECT * FROM employees
WHERE first_name LIKE "%a";

-- to search smt with one random letter, we write:
SELECT * FROM employees
WHERE jobs LIKE "_ook";

-- if we put two _ then it would be searching for words filled with all possible letter combinations, accordingly
SELECT * FROM employees
WHERE jobs LIKE "_ook_";

-- could be used for characters or numbers

--we can use both like...
SELECT * FROM employees
WHERE jobs LIKE "_a%";  --looking for any random strings with 2nd letter a
