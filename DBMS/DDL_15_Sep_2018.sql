desc employee;

alter table works add constraints sal_check check (salary between 10000 and 25000);

alter table employee add constraints name_check check(employee_name like 'E%');

alter table employee drop constraints name_check;

alter table employee add dob date;

alter table employee add constraints dob_check check(dob between '1-JAN-1990' and '31-DEC-2000');

insert into employee(EMPLOYEE_NAME,STREET,CITY,DOB) values('Employee 1','Street 1','City 1','25-DEC-1995');

insert into employee(EMPLOYEE_NAME,STREET,CITY,DOB) values('Employee 1','Street 1','City 1','25-DEC-1998');

rollback;

commit;

insert into employee values('Employee 2','Street 2','City 2','25-DEC-1999');

insert into employee(EMPLOYEE_NAME,STREET,CITY) values('Employee 3','Street 3','City 3');

insert into employee(CITY,EMPLOYEE_NAME,STREET,DOB) values('City 2','Employee 4','Street 4','25-DEC-1999');


