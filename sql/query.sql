create table empmst(
    id int PRIMARY KEY AUTO_INCREMENT,
    name text null,
    age int NOT null,
    salary int NULL
);

INSERT into emp_tbl VALUES
('',"test123",25,25000);

delete from emp_tbl where emp_id=4

update emp_tbl set
name="ABCD",
age=38
where emp_id = 3

SELECT * FROM `emp_tbl`;
SELECT name,age FROM `emp_tbl`;
SELECT name,age FROM `emp_tbl` where emp_id=5;
SELECT * FROM `emp_tbl` where age>=20 and age<=30
SELECT * FROM `emp_tbl` where age BETWEEN 20 AND 30;
SELECT * FROM `emp_tbl` where age IN (20,30);
SELECT * FROM `emp_tbl` where age NOT IN (20,30);
-- like query
SELECT * FROM `emp_tbl` where name LIKE 'j%';
SELECT * FROM `emp_tbl` where name like 'a%c%'
SELECT * FROM `emp_tbl` where name like '%d';
SELECT * FROM `emp_tbl` where name like 'j_l';

//first 5 records
SELECT * FROM `emp_tbl` limit 5;
//start from 2nd position  & total count -4 
//first record start from 0 index
SELECT * FROM `emp_tbl` limit 2,4;


SELECT * FROM `emp_tbl` ORDER by age; (ASC)
SELECT * FROM `emp_tbl` ORDER by age DESC;

//highest salary
SELECT *,MAX(salary) FROM `emp_tbl`;

SELECT * from emp_tbl ORDER by salary desc
//2nd highest salary
SELECT * from emp_tbl ORDER by salary desc LIMIT 1,1;
