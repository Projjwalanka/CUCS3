create table employee(
employee_name varchar2(30) primary key,
street varchar2(15),
city varchar2(15)
);

alter table employee add dob date;

alter table employee drop column dob;

drop table employee;

desc employee;

create table employee(
employee_name varchar2(30) primary key,
street varchar2(15),
city varchar2(15)
);

desc employee;

create table works(
employee_name varchar2(30) references employee(employee_name),
company_name varchar2(15),
salary number(5)
);

create table company(
company_name varchar2(15) primary key,
city varchar2(20)
);

create table manages(
employee_name varchar2(30) references employee(employee_name),
manager_name varchar2(30)
);

alter table works add constraint company_fk foreign key(company_name) references company(company_name);

desc works;
